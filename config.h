/* user and group to drop privileges to */
static const char *user  = "hurricane";
static const char *group = "hurricane";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     /* after initialization */
	[INPUT] =  "#9956F6",   /* during input */
	[FAILED] = "#9C080C",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 0;

static const char *imgpath          = "/home/hurricane/.config/slock-image.xpm";
static const int imgwidth           = 1920;
static const int imgheight          = 1080;
static const int imgoffsetx         = 0;
static const int imgoffsety         = 0;
static const int showimgalways 		= 0;

/* time in seconds before the monitor shuts down */
static const int monitortime = 5;
