#ifndef _MGL_CONFIG_H_
#define _MGL_CONFIG_H_

#define MGL_USE_DOUBLE	1
#define MGL_NO_DATA_A	0

#if defined(_MSC_VER) || defined(__BORLANDC__)
#define MGL_HAVE_PTHREAD	0
#else
#define MGL_HAVE_PTHREAD	0
#endif
#define MGL_HAVE_ZLIB	1
#define MGL_HAVE_PNG		0
#define MGL_HAVE_GSL		0
#define MGL_HAVE_OPENGL	1
#define MGL_HAVE_OMP		1
#define MGL_HAVE_JPEG	1
#define MGL_HAVE_GIF		1
#define MGL_HAVE_PDF		1
#define MGL_HAVE_HDF4	0
#define MGL_HAVE_HDF5	1
#define MGL_FONT_PATH	""

#endif
