// sub_184F38B00
// rva 0x04f38b00  size 273  section .text  group text
// window base 0x184f38b00: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F38B00(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6, char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // ebx
  int v12; // r10d
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 v21; // [rsp+0h] [rbp-28h] BYREF
  __int64 v22; // [rsp+8h] [rbp-20h]
  __int64 v23; // [rsp+10h] [rbp-18h]
  unsigned int v25; // [rsp+1Ch] [rbp-Ch]
  unsigned int v26; // [rsp+20h] [rbp-8h]
  int v27; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)&v21 <= *(_QWORD *)(v8 + 8) )
  {
LABEL_10:
    v26 = a5;
    v9 = MEMORY[0x181EB84E0]();
    goto LABEL_11;
  }
  v23 = a3;
  v9 = *(_DWORD *)(a3 + 8);
  if ( a5 < 0 || v9 <= a5 )
  {
    v27 = *(_DWORD *)(a3 + 8);
    v26 = a5;
    v17 = MEMORY[0x18632ACC0](a1, a2, a3: v7 + 376643464, a4, (unsigned int)a5, a6: (unsigned int)v9);
    if ( v17 == v7 )
    {
LABEL_12:
      MEMORY[0x182771080](a1: v19, a2: v20, a3: v23, a4: v18, a5: v26);
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
      return sub_184F38C20();
    }
    MEMORY[0x182769900](a1: v19, a2: v20, a3: v17, a4: v18, a5: &a7);
    goto LABEL_10;
  }
  v10 = *(unsigned int *)(a3 + 4);
  v11 = *(char *)(a3 + 12);
  v12 = a5 + 1;
  if ( (_DWORD)v10 == 0 )
  {
LABEL_11:
    v27 = v9;
    v26 = a5;
    MEMORY[0x182771080]();
    goto LABEL_12;
  }
  v13 = (unsigned int)(a5 << *(_BYTE *)(a3 + 12));
  v14 = (unsigned int)((v9 - v12) << *(_BYTE *)(a3 + 12));
  v26 = a5;
  v25 = v11;
  v22 = v7 + 8 * v10;
  v27 = v9;
  MEMORY[0x181EB4960](a1: v13, a2: v14, a3: v22, a4: v11, a5: (unsigned int)(v12 << v11), a6: v22);
  v15 = v23;
  *(_DWORD *)(v23 + 8) = v27 - 1;
  *(_BYTE *)(v15 + 13) = 1;
  if ( *(int *)(v8 + 16) <= 0 )
    MEMORY[0x18277F280]();
  return v15;
}
