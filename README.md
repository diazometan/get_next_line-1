# get_next_line

get_next_line function returns the next line in a given file,
which is pointed by file descriptor returned by open function.
It allocates memory for the line and points argument line to it,
returning 1 upon successful completion, -1 on errors, and 0 upon
no lines left in a given file.

Line is considered to be a string of characters delimited by '\n'.

### General use (simple main)

	# include <stdio.h>

	int	main(int args, char **argv)
	{
		int		fd;
		int		err;
		char	*line;

		if (args == 2)
		{
			fd = open(argv[1], O_RDONLY);
			while ((err = get_next_line(fd, &line)))
				printf("%s\n", line);
			free(line);
			if (err = -1)
				printf("error occured!\n");
		}
		else
			printf("Please enter one argument\n");
		return (0);
	}
