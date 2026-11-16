// sub_1592B80
// rva 0x01592b80  size 2065  section .text  group text
// window base 0x181592b80: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1592B80(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        int a6,
        int a7,
        __int64 a8,
        int a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        int a17,
        char a18)
{
  __int64 v18; // r14
  __int64 v19; // r15
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rbx
  __int64 result; // rax
  __int64 v25; // rbx
  __int64 v26; // rsi
  _QWORD v27[9]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v28; // [rsp+48h] [rbp-10h]
  unsigned int v29; // [rsp+54h] [rbp-4h]

  if ( (unsigned __int64)v27 <= *(_QWORD *)(v19 + 8) )
    JUMPOUT(0x181592EB2LL);
  if ( a5 >= 0xD )
    JUMPOUT(0x181592EC5LL);
  v20 = *(unsigned int *)(v18 + 4LL * a5 + 376612356);
  if ( (_DWORD)v20 == 0 )
    JUMPOUT(0x181592EDELL);
  v21 = *(unsigned int *)(v18 + 8 * v20 + 8);
  if ( (_DWORD)v21 == 0 )
    JUMPOUT(0x181592EEDLL);
  v22 = *(unsigned int *)(v18 + 8 * v21 + 12);
  v23 = *(unsigned int *)(a3 + 8);
  if ( (_DWORD)v23 == 0 )
    JUMPOUT(0x181592EFCLL);
  if ( *(_DWORD *)(v18 + 8 * v23 + 8) <= a5 )
    JUMPOUT(0x181592F10LL);
  if ( *(_BYTE *)(v18 + 8 * v23 + a5 + 12) != 0 )
  {
    if ( *(int *)(v19 + 16) <= 0 )
      JUMPOUT(0x181592E3CLL);
    return v18;
  }
  else
  {
    v25 = *(unsigned int *)(a3 + 4);
    v26 = v18 + 8 * v25;
    switch ( (_DWORD)v22 )
    {
      case 0x4101EF:
        if ( (_DWORD)v25 == 0 )
          JUMPOUT(0x1815930D7LL);
        if ( *(_DWORD *)(v18 + 8 * v25 + 8) <= a5 )
          JUMPOUT(0x1815930F7LL);
        v27[6] = v18 + 8 * v22;
        v29 = a5;
        v27[7] = a3;
        v28 = *(_QWORD *)(v26 + 8LL * a5 + 16);
        result = sub_15A82E0(a1, a2: v26, a3: v18 + 376612408, a4: v18 + 376612408, a5: v28);
        if ( *(int *)(v19 + 16) <= 0 )
          JUMPOUT(0x181592EA3LL);
        break;
      case 0x410264:
        return sub_181592D4B(
                 a1,
                 a2: v26,
                 a3,
                 a4: 4260452,
                 a5,
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
                 a16,
                 a17,
                 a18);
      case 0x4103C8:
        return sub_181592CE9(a1, a2: v26, a3, a4: 4260808, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16);
      case 0x41081D:
        return sub_181592C95(a1, a2: v26, a3, a4: 4261917, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16);
      default:
        JUMPOUT(0x181592F51LL);
    }
  }
  return result;
}
