#include "main.h"

/**
 * create_file - Creates a file and writes text to it.
 * @filename: The name of the file to be created.
 * @text_content: A NULL-terminated string to write to the file.
 *
 * Description: This function creates a new file and writes the content
 * of the text_content string to it. If the file already exists, it truncates
 * it. The file is created with read and write permissions for its owner.
 * If text_content is NULL, it creates an empty file.
 *
 * Return: 1 on success, -1 on failure (e.g., if filename is NULL, or
 * if the function fails to create, open, or write to the file).
 */
int create_file(const char *filename, char *text_content)
{
    int new_file, len = 0, wr_stat;

    if (!filename)
        return (-1);

    new_file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
    if (new_file == -1)
        return (-1);

    if (text_content != NULL)
    {
        while (text_content[len])
            len++;

        wr_stat = write(new_file, text_content, len);
        if (wr_stat == -1)
        {
            close(new_file);
            return (-1);
        }
    }

    if (close(new_file) == -1)
        return (-1);

    return (1);
}

