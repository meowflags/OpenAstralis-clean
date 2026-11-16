// sub_158E720
// rva 0x0158e720  size 168  section .text  group text
// window base 0x18158e720: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_158E720(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r13
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rcx
  int v10; // eax
  unsigned int v11; // ecx
  __int64 v13; // [rsp+0h] [rbp-28h] BYREF
  __int64 v14; // [rsp+10h] [rbp-18h]
  __int64 v15; // [rsp+18h] [rbp-10h]
  unsigned int v16; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)&v13 <= *(_QWORD *)(v5 + 8) )
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
    return sub_158E7E0();
  }
  else
  {
    v15 = a3;
    v6 = *(unsigned int *)(a3 + 4);
    if ( (_DWORD)v6 != 0 )
    {
      v14 = v4 + 8 * v6;
      v16 = sub_4FF37C0(a1, a2, a3: v14);
      a3 = v15;
    }
    else
    {
      v16 = 0;
    }
    v7 = *(unsigned int *)(a3 + 8);
    v8 = v4 + 8 * v7;
    if ( (_DWORD)v7 != 0 )
    {
      v9 = *(_QWORD *)(v4 + 8LL * (*(_DWORD *)(v4 + 8 * v7) >> 3) + 96);
      v14 = v8;
      v10 = ((__int64 (__fastcall *)(__int64, __int64, __int64))(v3 + v9))(a1, a2, a3: v8);
    }
    else
    {
      v10 = 0;
      v14 = v4 + 8 * v7;
    }
    if ( *(int *)(v5 + 16) <= 0 )
      v10 = sub_277F280(a1, a2, a3, a4: v16);
    else
      v11 = v16;
    return 31 * v11 + v10;
  }
}
