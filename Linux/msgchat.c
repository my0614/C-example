#define msgChar 0x0001001
#define msagHwInfo 0x0010002

#include <arpa/inet.h>

inline int Write(int x)
inline unsigned int Write(unsigned int x)	{return (htonl(x));}
inline short int Write(short int x)	{return (htonl(x));}
inline short unsigned int Write(short unsigned int x) { return (htons(x));}

inline int Read(int x)
inline unsigned int Read(unsigned int x) { return (ntohl(x));}
inline short int Read(short int x) {return (ntohl(x));}
inline short unsigned int Read(short unsigned int x) {return (ntohs(x)); }

struct msgHeader
{
	int cmdId;
}


inline void Write(struct msgHeader &x)
{
	x.cmdId = Write(x.cmdId);

}

struct data1
{
	
}

struct msg_1
{
	struct msgHeader hdr;
}
