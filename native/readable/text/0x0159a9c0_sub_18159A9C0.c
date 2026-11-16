// sub_159A9C0
// rva 0x0159a9c0  size 1426  section .text  group text
// window base 0x18159a9c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_159A9C0(
        int a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        int a10,
        __int64 a11,
        __int64 a12,
        int a13,
        int a14,
        int a15,
        char a16)
{
  __int64 v16; // r14
  __int64 v17; // r15
  __int64 result; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // [rsp+0h] [rbp-48h] BYREF
  __int64 v22; // [rsp+18h] [rbp-30h]
  __int64 v23; // [rsp+20h] [rbp-28h]
  __int64 v24; // [rsp+30h] [rbp-18h]
  int v25; // [rsp+38h] [rbp-10h]
  int v26; // [rsp+3Ch] [rbp-Ch]
  __int64 v27; // [rsp+40h] [rbp-8h]

  v23 = a3;
  v22 = a5;
  v27 = a6;
  v26 = a1;
  v25 = a2;
  if ( (unsigned __int64)&v21 <= *(_QWORD *)(v17 + 8) )
    JUMPOUT(0x18159AD9FLL);
  if ( v17 == *(_QWORD *)(v16 + 376351704) )
  {
    v19 = *(unsigned int *)(v16 + 376351692);
    if ( (_DWORD)v19 == 0 )
      JUMPOUT(0x18159ADA5LL);
    v20 = *(unsigned int *)(v16 + 8 * v19 + 4);
    if ( (_DWORD)v20 == 0 )
      JUMPOUT(0x18159ADAALL);
    if ( *(_DWORD *)(v16 + 8 * v20 + 8) == 47076659 )
    {
      result = *(_QWORD *)(v16 + 376178832);
      if ( result == 0 )
      {
LABEL_4:
        if ( *(int *)(v17 + 16) <= 0 )
          JUMPOUT(0x18159AC4CLL);
        return result;
      }
      v24 = *(_QWORD *)(v16 + 376178832);
      if ( result == v17 )
        JUMPOUT(0x18159AC15LL);
      if ( v22 == v16 )
        JUMPOUT(0x18159AF35LL);
      return sub_18159AA7E(
               a1,
               a2,
               a3: (int)v16 + 376612120,
               a4: (int)v16 + 376612120,
               a5: (int)v16 + 366698408,
               a6,
               a7,
               a8,
               a9,
               a10,
               a11,
               a12,
               a13,
               a14,
               a15,
               a16);
    }
  }
  result = sub_159CA80();
  if ( (_DWORD)result != 0 )
    JUMPOUT(0x18159AC05LL);
  goto LABEL_4;
}
