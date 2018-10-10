#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <assert.h>
#include "image.h"

#define M_PI 3.14159265358979323846


void l1_normalize(image im)
{
  // YOUR CODE HERE
}

image make_box_filter(int w)
{
  image ret = make_image(1,1,1);
  // YOUR CODE HERE
  return ret;
}

image convolve_image(image im, image filter, int preserve)
{
  image ret = make_image(1,1,1);
  // YOUR CODE HERE
  return ret;
}

image make_highpass_filter()
{
  image ret = make_image(1,1,1);
  // YOUR CODE HERE
  return ret;
}

image make_sharpen_filter()
{
  image ret = make_image(1,1,1);
  // YOUR CODE HERE
  return ret;
}

image make_emboss_filter()
{
  image ret = make_image(1,1,1);
  // YOUR CODE HERE
  return ret;
}

// Question 2.2.1: Which of these filters should we use preserve when we run our convolution and which ones should we not? Why?
// Answer: TODO

// Question 2.2.2: Do we have to do any post-processing for the above filters? Which ones and why?
// Answer: TODO

image make_gaussian_filter(float sigma)
{
  image ret = make_image(1,1,1);
  // YOUR CODE HERE
  return ret;
}

image add_image(image a, image b)
{
  image ret = make_image(1,1,1);
  // YOUR CODE HERE
  return ret;
}

image sub_image(image a, image b)
{
  image ret = make_image(1,1,1);
  // YOUR CODE HERE
  return ret;
}

image make_gx_filter()
{
  image ret = make_image(1,1,1);
  // YOUR CODE HERE
  return ret;
}

image make_gy_filter()
{
  image ret = make_image(1,1,1);
  // YOUR CODE HERE
  return ret;
}

void feature_normalize(image im)
{
  // YOUR CODE HERE
}

image *sobel_image(image im)
{
  image *ret = calloc(2, sizeof(image));
  // YOUR CODE HERE
  return ret;
}

image colorize_sobel(image im)
{
  image ret = make_image(1,1,1);
  // YOUR CODE HERE
  return ret;
}

image bilateral_filter(image im) 
{
  image ret = make_image(1,1,1);
  // YOUR CODE HERE
  return ret;
}