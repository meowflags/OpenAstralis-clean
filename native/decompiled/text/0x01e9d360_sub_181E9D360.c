// sub_181E9D360
// rva 0x01e9d360  size 333  section .text  group text
// window base 0x181e9d360: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181E9D360(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6, double a7, double a8)
{
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 result; // rax
  double v15; // xmm1_8
  double v16; // xmm0_8
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 v21; // r8
  char v22; // [rsp+0h] [rbp-28h] BYREF
  unsigned int v23; // [rsp+Ch] [rbp-1Ch]
  __int64 v24; // [rsp+10h] [rbp-18h]
  double v25; // [rsp+18h] [rbp-10h]
  double v26; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)&v22 <= *(_QWORD *)(v9 + 8) )
  {
    v26 = a8;
    v25 = a7;
    a7 = sub_181EB83C0(a1, a2, a3, a4, a5, a6, a7: v22);
    goto LABEL_12;
  }
  v24 = a3;
  *(double *)(a3 + 16) = a7 + *(double *)(a3 + 16);
  *(double *)(a3 + 24) = a7 * a7 + *(double *)(a3 + 24);
  *(double *)(a3 + 32) = a8 + *(double *)(a3 + 32);
  *(double *)(a3 + 40) = a7 * a8 + *(double *)(a3 + 40);
  v10 = *(unsigned int *)(a3 + 4);
  v23 = v10;
  if ( (_DWORD)v10 == 0 )
  {
LABEL_12:
    v26 = a8;
    v25 = a7;
    MEMORY[0x18276EFE0]();
    goto LABEL_13;
  }
  v26 = a8;
  v25 = a7;
  MEMORY[0x181E7E0A0](a1, a2, a3: v8 + 8 * v10);
  v13 = *(unsigned int *)(v24 + 8);
  if ( (_DWORD)v13 == 0 )
  {
LABEL_13:
    MEMORY[0x18276EFE0](a1: v25, a2: v26);
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
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_181E9D4C0(a1: v19, a2: v20, a3: v17, a4: v18, a5: v21);
  }
  MEMORY[0x181E7E0A0](a1: v11, a2: v12, a3: v8 + 8 * v13, a4: v26);
  result = *(_QWORD *)(v8 + 8LL * v23 + 24);
  if ( result >= 2 )
  {
    v15 = *(double *)(v24 + 16);
    v16 = *(double *)(v24 + 24) * (double)result - v15 * v15;
    if ( v16 != 0.0 )
      *(double *)(v24 + 48) = ((double)result * *(double *)(v24 + 40) - v15 * *(double *)(v24 + 32)) / v16;
  }
  if ( *(int *)(v9 + 16) <= 0 )
    return MEMORY[0x18277F280]();
  return result;
}
