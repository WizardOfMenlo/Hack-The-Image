#include "Image.hpp"

#include <cstdio>
#include <cstdlib>

Image::Image(const std::string filename):
	filename_(filename), cimage(filename.c_str())
{}

Image::~Image() {
}

void Image::Print() {
	for(int i = 0; i < cimage.height(); ++i) {
		for(int j = 0; j < cimage.width(); ++j) {
			printf("%X ", cimage[i * cimage.width() + j]);
		}
		printf("\n");
	}
}
