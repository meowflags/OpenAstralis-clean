// sub_1E9AC40
// rva 0x01e9ac40  size 242  section .text  group text
// window base 0x181e9ac40: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1E9AC40(__int64 a1, __int64 a2, int a3, int a4, __int64 a5, unsigned int a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  unsigned __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rcx
  __int64 v18; // rsi
  __int64 result; // rax
  unsigned __int64 v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdi
  __int64 v24; // rsi
  __int64 v25; // r8
  char v26; // [rsp+0h] [rbp-18h] BYREF
  __int64 v27; // [rsp+8h] [rbp-10h]
  unsigned int v28; // [rsp+14h] [rbp-4h]

  v27 = a5;
  if ( (unsigned __int64)&v26 <= *(_QWORD *)(v7 + 8) )
  {
    sub_1EB83C0(a1, a2, a3, a4, a5, a6, a7: v26);
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
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_1E9AD40(a1: v23, a2: v24, a3: v21, a4: v22, a5: v25);
  }
  else
  {
    v28 = a6;
    sub_1EA0160(a1, a2, a3: v6 + 376654552);
    *(_DWORD *)(v6 + 376656804) = (unsigned __int64)(v27 - v6) >> 3;
    v11 = v6 + 376656800;
    if ( (*(_DWORD *)(v6 + 376656800) & 2) != 0 )
    {
      v8 = v11 & 0xFFFFFFFFFFF80000LL;
      v20 = (v11 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v11 & 0xFFFFFFFFFFF80000LL) + ((v11 - v20) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v11 & 0xFFFFFFFFFFF80000LL) + ((v11 - v20) >> 9) + 0x38) = 0;
    }
    sub_1E9C760(a1: v9, a2: v10, a3: v6 + 58177792, a4: v8, a5: v6 + 376656800);
    sub_1EA6180(a1: v13, a2: v14, a3: v6 + 376652784, a4: v12, a5: v27, a6: v28);
    sub_1EA0160(a1: v15, a2: v16, a3: v6 + 376653896);
    result = sub_1E98DA0(a1: 0, a2: v18, a3: v27, a4: v17, a5: *(_QWORD *)(v6 + 376656656), a6: v6 + 370760272);
    if ( *(int *)(v7 + 16) <= 0 )
      return sub_277F280();
  }
  return result;
}
