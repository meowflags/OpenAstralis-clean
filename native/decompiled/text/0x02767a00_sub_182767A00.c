// sub_182767A00
// rva 0x02767a00  size 690  section .text  group text
// window base 0x182767a00: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_182767A00(
        int a1,
        int a2,
        _DWORD *a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7,
        __int64 a8,
        __int64 a9,
        int a10,
        __int64 a11,
        __int64 a12,
        int a13,
        __int64 a14,
        int a15,
        char a16)
{
  _DWORD *v16; // r14
  __int64 v17; // r15
  _QWORD v19[7]; // [rsp+0h] [rbp-48h] BYREF
  int v20; // [rsp+3Ch] [rbp-Ch]
  __int64 v21; // [rsp+40h] [rbp-8h]

  if ( (unsigned __int64)v19 <= *(_QWORD *)(v17 + 8) )
    JUMPOUT(0x182767B45LL);
  if ( a6 < 0 )
    JUMPOUT(0x182767B59LL);
  if ( a3 == v16 )
    JUMPOUT(0x182767B72LL);
  v21 = 34081944;
  v20 = a6;
  v19[6] = a5;
  return sub_182767A4E(a1, a2, (_DWORD)a3, a4: *a3 >> 3, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16);
}
