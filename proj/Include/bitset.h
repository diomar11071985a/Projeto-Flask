
#ifndef Py_BITSET_H
#define Py_BITSET_H
#ifdef __cplusplus
extern "C" {
#endif

/* Bitset interface */

<<<<<<< HEAD
#define BYTE            char
=======
#define BYTE		char
>>>>>>> 73921da00deaf52c46c591e7cf1f6c7e6f6daa65

typedef BYTE *bitset;

bitset newbitset(int nbits);
void delbitset(bitset bs);
#define testbit(ss, ibit) (((ss)[BIT2BYTE(ibit)] & BIT2MASK(ibit)) != 0)
int addbit(bitset bs, int ibit); /* Returns 0 if already set */
int samebitset(bitset bs1, bitset bs2, int nbits);
void mergebitset(bitset bs1, bitset bs2, int nbits);

<<<<<<< HEAD
#define BITSPERBYTE     (8*sizeof(BYTE))
#define NBYTES(nbits)   (((nbits) + BITSPERBYTE - 1) / BITSPERBYTE)

#define BIT2BYTE(ibit)  ((ibit) / BITSPERBYTE)
#define BIT2SHIFT(ibit) ((ibit) % BITSPERBYTE)
#define BIT2MASK(ibit)  (1 << BIT2SHIFT(ibit))
#define BYTE2BIT(ibyte) ((ibyte) * BITSPERBYTE)
=======
#define BITSPERBYTE	(8*sizeof(BYTE))
#define NBYTES(nbits)	(((nbits) + BITSPERBYTE - 1) / BITSPERBYTE)

#define BIT2BYTE(ibit)	((ibit) / BITSPERBYTE)
#define BIT2SHIFT(ibit)	((ibit) % BITSPERBYTE)
#define BIT2MASK(ibit)	(1 << BIT2SHIFT(ibit))
#define BYTE2BIT(ibyte)	((ibyte) * BITSPERBYTE)
>>>>>>> 73921da00deaf52c46c591e7cf1f6c7e6f6daa65

#ifdef __cplusplus
}
#endif
#endif /* !Py_BITSET_H */
