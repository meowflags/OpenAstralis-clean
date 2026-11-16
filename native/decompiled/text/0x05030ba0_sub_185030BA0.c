// sub_185030BA0
// rva 0x05030ba0  size 589  section .text  group text
// window base 0x185030ba0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_185030BA0(
        int a1,
        int a2,
        _DWORD *a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        int a11,
        char a12)
{
  __int64 v12; // r14
  __int64 v13; // r15
  __int64 v14; // rax
  __int64 v16; // [rsp+0h] [rbp-28h] BYREF

  if ( (unsigned __int64)&v16 <= *(_QWORD *)(v13 + 8) )
    JUMPOUT(0x185030C55LL);
  v14 = *a3 >> 3;
  if ( *(__int16 *)(v12 + 8 * v14 + 62) < 3 )
    JUMPOUT(0x185030C27LL);
  if ( *(_DWORD *)(v12 + 8LL * *(unsigned int *)(v12 + 8 * v14 + 16) + 20) == 70129 && a5 == 0 )
    JUMPOUT(0x185030CEDLL);
  return sub_185030C08(
           a1,
           a2,
           (_DWORD)a3,
           a4: *(_DWORD *)(v12 + 8LL * *(unsigned int *)(v12 + 8 * v14 + 16) + 20) == 70129,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11,
           a12);
}
