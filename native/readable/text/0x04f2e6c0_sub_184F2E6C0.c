// sub_4F2E6C0
// rva 0x04f2e6c0  size 1621  section .text  group text
// window base 0x184f2e6c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F2E6C0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        int a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16)
{
  __int64 v16; // r14
  __int64 v17; // r15
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 result; // rax
  __int64 v24; // [rsp+0h] [rbp-58h] BYREF
  __int64 v25; // [rsp+18h] [rbp-40h]
  __int64 v26; // [rsp+20h] [rbp-38h]
  __int64 v27; // [rsp+28h] [rbp-30h]
  int v28; // [rsp+3Ch] [rbp-1Ch]
  __int64 v29; // [rsp+40h] [rbp-18h]
  __int64 v30; // [rsp+48h] [rbp-10h]
  __int64 v31; // [rsp+50h] [rbp-8h]

  if ( (unsigned __int64)&v24 <= *(_QWORD *)(v17 + 8) )
  {
    v26 = a5;
    v27 = a3;
    sub_1EB84E0();
  }
  else if ( a5 != v16 )
  {
    v18 = *(unsigned int *)(a5 + 4);
    if ( (_DWORD)v18 == 0 )
    {
LABEL_10:
      v26 = a5;
      v27 = a3;
      sub_2771080();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      return ((__int64 (*)(void))sub_4F2ED20)();
    }
    v19 = *(_DWORD *)(v16 + 8 * v18 + 8) >> *(_BYTE *)(a5 + 12);
    v31 = 34082368;
    if ( v19 == 2 )
      return sub_184F2E761(a1, a2, a3, a4: 34082680, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16);
    v30 = 34085680;
    v29 = 34082680;
    v28 = v19;
    v26 = a5;
    v27 = a3;
    if ( v19 == 3 )
      JUMPOUT(0x184F2E799LL);
    v25 = sub_4F2ED20(a1, a2, a3: v27, a4: 34082680, a5: v26);
    result = sub_4F2FF60(a1: v21, a2: v22, a3: v27, a4: v20, a5: v25);
    if ( *(int *)(v17 + 16) <= 0 )
      JUMPOUT(0x184F2EBD7LL);
    return result;
  }
  v27 = a3;
  sub_2771080();
  goto LABEL_10;
}
