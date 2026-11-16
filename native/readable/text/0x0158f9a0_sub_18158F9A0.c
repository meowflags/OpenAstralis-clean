// sub_158F9A0
// rva 0x0158f9a0  size 152  section .text  group text
// window base 0x18158f9a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_158F9A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // rcx
  int v11; // eax
  unsigned int v12; // ecx
  int v14; // edx
  int v15; // ecx
  int v16; // edi
  int v17; // esi
  int v18; // r8d
  int v19; // r9d
  __int64 v20; // [rsp+0h] [rbp-28h] BYREF
  __int64 v21; // [rsp+10h] [rbp-18h]
  __int64 v22; // [rsp+18h] [rbp-10h]
  unsigned int v23; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)&v20 <= *(_QWORD *)(v8 + 8) )
  {
    sub_1EB84E0();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_158FA40(a1: v16, a2: v17, a3: v14, a4: v15, a5: v18, a6: v19, a7);
  }
  else
  {
    v22 = a3;
    v9 = *(unsigned int *)(a3 + 4);
    if ( (_DWORD)v9 != 0 )
    {
      v21 = v7 + 8 * v9;
      v23 = sub_4FF37C0(a1, a2, a3: v21);
      a3 = v22;
    }
    else
    {
      v23 = 0;
    }
    v10 = *(unsigned int *)(a3 + 8);
    if ( (_DWORD)v10 != 0 )
    {
      v21 = v7 + 8 * v10;
      v11 = sub_4FF37C0(a1, a2, a3: v21);
    }
    else
    {
      v11 = 0;
      v21 = v7 + 8 * v10;
    }
    if ( *(int *)(v8 + 16) <= 0 )
      v11 = sub_277F280(a1, a2, a3, a4: v23);
    else
      v12 = v23;
    return 31 * v12 + v11;
  }
}
