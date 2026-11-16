// sub_181E63CC0
// rva 0x01e63cc0  size 271  section .text  group text
// window base 0x181e63cc0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181E63CC0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, unsigned int a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rbx
  unsigned int v11; // ebp
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 result; // rax
  __int64 v15; // rdx
  __int64 v16; // rdi
  __int64 v17; // [rsp+0h] [rbp-38h] BYREF
  __int64 v18; // [rsp+8h] [rbp-30h]
  int v19; // [rsp+14h] [rbp-24h]
  __int64 v20; // [rsp+18h] [rbp-20h]
  int v21; // [rsp+20h] [rbp-18h]
  unsigned int v22; // [rsp+24h] [rbp-14h]
  __int64 v23; // [rsp+28h] [rbp-10h]
  unsigned int v24; // [rsp+34h] [rbp-4h]

  if ( (unsigned __int64)&v17 <= *(_QWORD *)(v7 + 8) )
  {
    MEMORY[0x181EB84E0]();
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
    return sub_181E63DE0();
  }
  else
  {
    v8 = *(unsigned int *)(v6 + 376650988);
    v9 = v6 + 8 * v8;
    v10 = a5;
    if ( (_DWORD)v8 != 0 )
      v11 = *(char *)(v9 + a5 + 12);
    else
      v11 = *(char *)(a5 + 0xCLL);
    v12 = *(_QWORD *)(v7 + 40);
    v13 = v12 + 24;
    if ( (unsigned __int64)(v12 + 24) > *(_QWORD *)(v7 + 32) )
    {
      v24 = v11;
      v23 = a5;
      v20 = v6 + 8 * v8;
      v19 = v8;
      v22 = a6;
      v21 = a5;
      v18 = a3;
      v12 = MEMORY[0x181EAA920](a1: v13, a2: v12, a3: 40451336);
      LOBYTE(v11) = v24;
      v10 = v23;
      LODWORD(v8) = v19;
      a6 = v22;
    }
    else
    {
      *(_QWORD *)(v7 + 40) = v13;
      *(_DWORD *)v12 = 40451336;
      *(_DWORD *)(v12 + 4) = 0;
      *(_QWORD *)(v12 + 8) = 0;
      *(_QWORD *)(v12 + 16) = 0;
      v21 = a5;
      v18 = a3;
    }
    *(_QWORD *)(v12 + 8) = v10 + 1;
    *(_DWORD *)(v12 + 4) = v8;
    v22 = a6;
    v20 = v12;
    v24 = (unsigned __int8)v11 == 1;
    result = sub_181E61A20(a1: v13, a2: v12, a3: v12, a4: v9, a5: a6, a6: v24);
    if ( *(int *)(v7 + 16) <= 0 )
      return MEMORY[0x18277F280](a1: v16, a2: v20, a3: v15, a4: v24);
  }
  return result;
}
