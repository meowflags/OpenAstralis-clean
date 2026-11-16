// sub_181EC73C0
// rva 0x01ec73c0  size 326  section .text  group text
// window base 0x181ec73c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181EC73C0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v9; // r14
  __int64 v10; // r15
  __int64 v11; // r8
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 result; // rax
  __int64 v17; // [rsp+0h] [rbp-28h] BYREF
  __int64 v18; // [rsp+10h] [rbp-18h]
  __int64 v19; // [rsp+18h] [rbp-10h]
  __int64 v20; // [rsp+20h] [rbp-8h]

  v20 = a3;
  if ( (unsigned __int64)&v17 <= *(_QWORD *)(v10 + 8) )
    JUMPOUT(0x181EC74B1LL);
  if ( a3 == v9 )
    JUMPOUT(0x181EC74B6LL);
  v11 = *(unsigned int *)(a3 + 16);
  if ( (_DWORD)v11 == 0 )
    JUMPOUT(0x181EC74BBLL);
  v12 = *(unsigned int *)(v9 + 8 * v11 + 8);
  v13 = v9 + 8 * v12;
  if ( (_DWORD)v12 == 0 )
    JUMPOUT(0x181EC74C5LL);
  v14 = *(unsigned int *)(v9 + 8 * v12 + 28);
  if ( (_DWORD)v14 == 0 )
    JUMPOUT(0x181EC74CFLL);
  v15 = *(unsigned int *)(v9 + 8 * v14 + 48);
  if ( (_DWORD)v15 != 0 )
  {
    LODWORD(v14) = *(_DWORD *)(v9 + 8 * v15) >> 3;
    if ( (_DWORD)v14 != 5058603 )
      JUMPOUT(0x181EC74D9LL);
  }
  if ( *(_DWORD *)(a3 + 12) == 47082445 )
    return sub_181EC7471(a1, a2, a3, a4: v13, a5: v14, a6, a7, a8, a9);
  if ( (_DWORD)v15 == 0 )
    JUMPOUT(0x181EC74F4LL);
  v19 = v13;
  v18 = v9 + 8 * v15;
  result = sub_181EC7520(a1, a2, a3: v18, a4: v13, a5: v13, a6: a3);
  if ( *(int *)(v10 + 16) <= 0 )
    JUMPOUT(0x181EC74AALL);
  return result;
}
