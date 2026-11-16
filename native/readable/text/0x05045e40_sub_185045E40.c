// sub_5045E40
// rva 0x05045e40  size 304  section .text  group text
// window base 0x185045e40: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
void __fastcall sub_5045E40(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // r15
  int v5; // eax
  int v6; // eax
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rdx
  int v10; // [rsp+0h] [rbp-18h] BYREF
  __int64 v11; // [rsp+8h] [rbp-10h]
  int v12; // [rsp+14h] [rbp-4h]

  if ( (unsigned __int64)&v10 <= *(_QWORD *)(v4 + 8) )
  {
    sub_1EB84E0(a1, a2, a3, a4: a3);
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
    sub_5045F80();
  }
  else
  {
    v11 = a3;
    if ( *(_BYTE *)(a3 + 102) != 0
      && (v5 = *(unsigned __int8 *)(a3 + 102), *(_BYTE *)(a3 + 102) = 0, (MEMORY[0xe9691e8]/* 0xe9691e8 */ & v5) != 0)
      || *(_BYTE *)(a3 + 100) != 0 )
    {
      if ( *(int *)(v4 + 16) <= 0 )
        sub_277F280();
    }
    else
    {
      *(_DWORD *)(a3 + 136) = 3;
      __faststorefence();
      v6 = sub_63606A0(a1, a2, a3: v3 + 376668552);
      v9 = v11;
      if ( v6 != 0 )
      {
        v12 = v6;
      }
      else
      {
        *(_DWORD *)(v11 + 136) = 2;
        __faststorefence();
        v12 = 0;
        sub_50462C0(a1: v7, a2: v8, a3: v9, a4: v9, a5: 0, a6: 0);
      }
      if ( *(int *)(v4 + 16) <= 0 )
        sub_277F280(a1: v7, a2: v8, a3: v9);
    }
  }
}
