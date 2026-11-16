// sub_19329CA8B
// rva 0x1329ca8b  size 120  section .text  group text
// window base 0x19329ca8b: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
void __fastcall sub_19329CA8B(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        int a7,
        int a8,
        int a9,
        char a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        __int64 a19,
        __int64 a20)
{
  unsigned __int64 v20; // rbx
  unsigned int v21; // r10d
  __int64 v22; // r11
  __int64 *v23; // r8
  int v24; // r11d
  char *v25; // rdi
  __int64 v26; // rax
  char v27; // cl
  unsigned __int64 v28; // rdx

  *(_QWORD *)(v22 + 16) = a2;
  v23 = (__int64 *)(v22 - 56);
  *(_QWORD *)(v22 + 24) = a1;
  v24 = 5;
  v25 = &a10;
  do
  {
    v26 = *v23;
    v25 += 8;
    v27 = v24;
    ++v23;
    v24 += 5;
    *((_QWORD *)v25 - 1) = (v26 ^ (v20 >> v27)) + 0x463CA9503519415BLL;
    v28 = (unsigned __int64)*(v23 - 1) >> (63 - (unsigned __int8)a6++);
    v20 ^= v28 | (*(v23 - 1) << a6);
  }
  while ( a6 < v21 );
  JUMPOUT(0x19329CB03LL);
}
