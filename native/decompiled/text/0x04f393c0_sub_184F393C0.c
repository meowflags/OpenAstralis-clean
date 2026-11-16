// sub_184F393C0
// rva 0x04f393c0  size 265  section .text  group text
// window base 0x184f393c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F393C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, unsigned int a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  unsigned int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 result; // rax
  __int64 v14; // [rsp+0h] [rbp-28h] BYREF
  __int64 v15; // [rsp+8h] [rbp-20h]
  __int64 v16; // [rsp+10h] [rbp-18h]
  unsigned int v17; // [rsp+18h] [rbp-10h]
  unsigned int v18; // [rsp+1Ch] [rbp-Ch]
  unsigned int v19; // [rsp+20h] [rbp-8h]
  unsigned int v20; // [rsp+24h] [rbp-4h]

  v16 = a3;
  v20 = a6;
  v15 = a1;
  if ( (unsigned __int64)&v14 <= *(_QWORD *)(v7 + 8) )
  {
    v19 = a2;
    v18 = a5;
    MEMORY[0x181EB84E0]();
    goto LABEL_10;
  }
  v19 = a2;
  v8 = *(_DWORD *)(a3 + 8);
  v18 = a5;
  MEMORY[0x18632A360](a1: v6 + 376643464, a2, a3: a5, a4: v6 + 376643464, a5: a6, a6: v8);
  v10 = v15;
  if ( v15 == v6 )
  {
LABEL_10:
    MEMORY[0x182771080](a1: v10, a2: v19, a3: v16, a4: v9, a5: v18);
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
    return sub_184F394E0();
  }
  v11 = *(unsigned int *)(v15 + 8);
  v17 = v20 - v18;
  MEMORY[0x18632A360](a1: v6 + 377133352, a2: v20 - v18 + v19, a3: v19, a4: v11, a5: v20 - v18 + v19, a6: v11);
  if ( *(_BYTE *)(v16 + 12) != 0 )
    result = MEMORY[0x18501FD60](a1: v15, a2: v19, a3: v6 + 8LL * *(unsigned int *)(v16 + 4), a4: v12, a5: v18, a6: v20);
  else
    result = MEMORY[0x185015DE0](a1: v15, a2: v19, a3: v6 + 8LL * *(unsigned int *)(v16 + 4), a4: v12, a5: v18, a6: v20);
  if ( *(int *)(v7 + 16) <= 0 )
    return MEMORY[0x18277F280]();
  return result;
}
