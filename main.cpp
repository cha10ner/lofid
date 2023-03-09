#include <dirent.h>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	DIR *dir;
	struct dirent *ent;
	if ((dir = opendir(".")) != NULL)
	{
		while ((ent = readdir(dir)) != NULL)
		{
		cout << ent->d_name << endl;
		}
		closedir(dir);
	} 
	else
	{
	cerr << "failed to open directory." << endl;
	return EXIT_FAILURE;
	}
	return EXIT_SUCCESS;
}
