// sub_4F38C20
// rva 0x04f38c20  size 153  section .text  group text
// window base 0x184f38c20: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
void __fastcall sub_4F38C20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // r9
  unsigned int v8; // eax
  __int64 v9; // rax
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // [rsp+0h] [rbp-18h] BYREF
  _DWORD *v19; // [rsp+8h] [rbp-10h]
  int v20; // [rsp+14h] [rbp-4h]

  if ( (unsigned __int64)&v18 <= *(_QWORD *)(v6 + 8) )
  {
    sub_1EB84E0();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    sub_4F38CC0(a1: v14, a2: v15, a3: v12, a4: v13, a5: v16, a6: v17);
  }
  else
  {
    if ( a5 < 1 )
    {
      v20 = a5;
    }
    else
    {
      v7 = v5 + 8LL * *(unsigned int *)(a3 + 4);
      v8 = *(char *)(a3 + 12);
      v19 = (_DWORD *)a3;
      v20 = a5;
      v9 = sub_4F39060(a1, a2, a3: v7, a4, a5: v8, a6: (unsigned int)a5);
      v10 = (unsigned __int64)v19;
      v19[1] = (unsigned __int64)(v9 - v5) >> 3;
      if ( (*(_DWORD *)v10 & 2) != 0 )
      {
        v11 = (v10 & 0xFFFFFFFFFFF80000LL) + 2112;
        if ( *(_BYTE *)((v10 & 0xFFFFFFFFFFF80000LL) + ((v10 - v11) >> 9) + 0x38) != 0 )
          *(_BYTE *)((v10 & 0xFFFFFFFFFFF80000LL) + ((v10 - v11) >> 9) + 0x38) = 0;
      }
    }
    if ( *(int *)(v6 + 16) <= 0 )
      sub_277F280();
  }
}
