// sub_132B96D8
// rva 0x132b96d8  size 94  section .text  group text
// window base 0x1932b96d8: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_132B96D8(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        int a9,
        unsigned __int8 a10)
{
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // r9
  int v16; // eax
  __int64 v17; // rdi
  __int64 v18; // rsi
  unsigned int v19; // [rsp+0h] [rbp-28h]

  v11 = sub_132B8E78(a1, a2, a3, a4);
  if ( v11 == -1 )
  {
    JNU_ThrowIOException(a1: v12, a2: v13, a3: 543576, a4);
    return 0xFFFFFFFFLL;
  }
  v16 = handleRead(a1: v12, a2: v13, a3: (__int64)&a10, a4: v11, a5: 1, a6: v14, a7: v19);
  if ( v16 == 0 )
    return 0xFFFFFFFFLL;
  if ( v16 == -1 )
    JNU_ThrowIOExceptionWithLastError(a1: v17, a2: v18, a3: 545160, a4);
  return a10;
}
