#define WORDLENGTH_T 16
void addPrime(__global ushort*  outputBytes, const size_t ID, __private ushort PRIME[]);
void subtractPrime(__global ushort*  outputBytes, const size_t ID,__private ushort PRIME[]);
char compareWithPrime(__global ushort*  outputBytes, const size_t ID, __private ushort PRIME[]);
void add(__global ushort* input1, __global ushort* input2, __global ushort* outputBytes, const size_t ID);
void subtractPositive(__global ushort* input1, __global ushort* input2, __global ushort* outputBytes, const size_t ID);
void addMod(__global ushort* input1, __global ushort* input2, __global ushort* outputBytes, const size_t ID, __private ushort PRIME[]);
void subtractMod(__global ushort* input1, __global ushort* input2, __global ushort* outputBytes, const size_t ID,  __private ushort PRIME[]);
void multiplyProductScanning(__global ushort* input1, __global ushort* input2, __global ushort* outputBytes, const size_t ID);
void multiplyOperandScanning(__global ushort* input1, __global ushort* input2, __global ushort* outputBytes, const size_t ID);
int  MIN(int x,int y);
int  MAX(int x,int y);
void montgomeryMultiplication(__global ushort*  x,__global ushort* y,__global ushort* result,const size_t ID,__private ushort PRIME[],const unsigned int m_prime);
void rightShiftFormby1InResultPriv(__private ushort Aplusxiy[],__private ushort resultPrivate[]) ;
void subtractPositiveResultPrivate(__private ushort resultPrivate[],__private ushort PRIME[]);
int  compareResultPrivPrime(__private ushort resultPrivate[],__private ushort PRIME[]);
void multiplyNoOverFlow1xWORDLENGTH(ushort n,const size_t ID,__global ushort* y,__private ushort xiy[]) ;
void addNoOverFlowPrivate_XIY(__private ushort resultPrivate[],__private ushort xiy[],__private ushort Aplusxiy[]);
void addNoOverFlowPrivateAplusxiy(unsigned int ui,__private ushort Aplusxiy[],__private ushort cteUI[], __private ushort PRIME[]);
void multiplyNoOverFlowCte(int n,__private ushort cteUI[],__private ushort PRIME[]);
void copyResultPrivTo(__global ushort*  result,__private ushort resultPrivate[] ,const size_t ID);
