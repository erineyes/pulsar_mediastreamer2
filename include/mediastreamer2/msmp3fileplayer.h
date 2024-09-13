 
#ifndef msmp3fileplayer_h
#define msmp3fileplayer_h

#include <mediastreamer2/msfilter.h>

 /*methods*/
#define MS_MP3FILE_PLAYER_OPEN MS_FILTER_METHOD(MS_MP3FILE_PLAYER_ID, 0, const char *)
#define MS_MP3FILE_PLAYER_START MS_FILTER_METHOD_NO_ARG(MS_MP3FILE_PLAYER_ID, 1)
#define MS_MP3FILE_PLAYER_STOP MS_FILTER_METHOD_NO_ARG(MS_MP3FILE_PLAYER_ID, 2)
#define MS_MP3FILE_PLAYER_CLOSE MS_FILTER_METHOD_NO_ARG(MS_MP3FILE_PLAYER_ID, 3)
/* set loop mode:
    -1: no looping,
    0: loop at end of file,
    x>0, loop after x miliseconds after eof
*/
#define MS_MP3FILE_PLAYER_LOOP MS_FILTER_METHOD(MS_MP3FILE_PLAYER_ID, 4, int)
#define MS_MP3FILE_PLAYER_DONE MS_FILTER_METHOD(MS_MP3FILE_PLAYER_ID, 5, int)
#define MS_MP3FILE_PLAYER_BIG_BUFFER MS_FILTER_METHOD(MS_MP3FILE_PLAYER_ID, 6, int)
#define MS_MP3FILE_PLAYER_SET_SILENCE MS_FILTER_METHOD(MS_MP3FILE_PLAYER_ID, 80, int)

/*events*/
#define MS_MP3FILE_PLAYER_EOF MS_FILTER_EVENT_NO_ARG(MS_MP3FILE_PLAYER_ID, 0)

#endif
