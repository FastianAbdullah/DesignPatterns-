/*Consider that you’re building a system to manage files and folders.In this
system, there are two main elements : individual Files and Folder.A
Folder can hold multiple Files and even other smaller Folders.
These nested Folders can further contain more Files or additional
Folders, creating a hierarchical structure.
Now, suppose you want to develop a feature in this system that allows
you to calculate the total size of all the Files in the system, whether
they’re standalone or inside Folders.This includes the size of Files
within Folders, within Folders, and so on.
To handle this, you could employ the Composite design pattern and
introduce a FileSystemComponent class.This class would provide a
unified way to interact with both Files and Folders.It could include
methods like getSize(), which would calculate the size of a File or total
size of all Files within a Directory, regardless of how deeply nested they
are.
*/
/*
#include <iostream>
using namespace std;
// The component class declares the interface for objects in the composition
class FileSystemComponent {
public:
	virtual int getSize() = 0; // Method to get the size of the component
};
// Leaf class represents end objects of a composition. A leaf can't have any children.
class File : public FileSystemComponent {
private:
	int size;
public:
	File(int size) : size(size) {}
	int getSize() {
		cout << "File size: " << size << endl;
		return size;
	}
};
// Composite class represents complex components that may have children. 
class Folder : public FileSystemComponent {
private:
	FileSystemComponent** components; // Stores child components
	int componentCount;
	int capacity;
public:
	Folder() : componentCount(0), capacity(10) {
		components = new FileSystemComponent * [capacity];
	}
	void addComponent(FileSystemComponent* component) {
		if (componentCount == capacity) {
			capacity *= 2;
			FileSystemComponent** newComponents = new FileSystemComponent * [capacity];
			for (int i = 0; i < componentCount; i++) {
				newComponents[i] = components[i];
			}
			delete[] components;
			components = newComponents;
		}
		components[componentCount++] = component;
	}
	int getSize() {
		int totalSize = 0;
		for (int i = 0; i < componentCount; i++) {
			totalSize += components[i]->getSize();
		}
		cout << "Directory size: " << totalSize << endl;
		return totalSize;
	}
};
int main() {
	// Create new File objects
	File* file1 = new File(100);
	File* file2 = new File(200);
	File* file3 = new File(300);
	
	// Create a new Directory object and add Files to it
	Folder* folder = new Folder();
	folder->addComponent(file1);
	folder->addComponent(file2);
	folder->addComponent(file3);
	Folder* folder2 = new Folder();
	folder2->addComponent(file3);
	folder->addComponent(folder2);
	// Get the total size of the Directory
	folder->getSize();
	return 0;
}*/

