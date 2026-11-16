// sub_181E9D520
// rva 0x01e9d520  size 200  section .text  group text
// window base 0x181e9d520: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181E9D520(int a1, int a2, __int64 a3, int a4, int a5, int a6, double a7)
{
  __int64 v7; // r15
  int v8; // eax
  double v9; // xmm1_8
  double v10; // xmm2_8
  double v11; // xmm4_8
  __int64 result; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // r8
  char v18; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v18 <= *(_QWORD *)(v7 + 8) )
  {
    sub_181EB83C0(a1, a2, a3, a4, a5, a6, a7: v18);
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
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_181E9D600(a1: v15, a2: v16, a3: v13, a4: v14, a5: v17);
  }
  else
  {
    v8 = *(_DWORD *)(a3 + 4);
    if ( v8 != 0 )
    {
      v9 = *(double *)(a3 + 24);
      v10 = *(double *)(a3 + 40);
      v11 = (a7 - v9) * v10;
      *(double *)(a3 + 24) = v9 + v11;
      *(double *)(a3 + 32) = (MEMORY[0x11B12978] - v10) * ((a7 - v9) * v11 + *(double *)(a3 + 32));
    }
    else
    {
      *(double *)(a3 + 24) = a7;
      *(_QWORD *)(a3 + 32) = 0;
    }
    *(double *)(a3 + 48) = a7;
    if ( v8 != 0 )
    {
      if ( a7 > *(double *)(a3 + 56) )
        *(double *)(a3 + 56) = a7;
    }
    else
    {
      *(double *)(a3 + 56) = a7;
    }
    *(double *)(a3 + 8) = a7 + *(double *)(a3 + 8);
    *(double *)(a3 + 16) = a7 * a7 + *(double *)(a3 + 16);
    result = (unsigned int)(v8 + 1);
    *(_DWORD *)(a3 + 4) = result;
    if ( *(int *)(v7 + 16) <= 0 )
      return MEMORY[0x18277F280]();
  }
  return result;
}
