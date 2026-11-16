// sub_182756980
// rva 0x02756980  size 267  section .text  group text
// window base 0x182756980: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
void __fastcall __noreturn sub_182756980(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  __int64 v7; // r14
  _QWORD *v8; // r15
  __int64 v9; // rax
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rax
  int v15; // edx
  int v16; // ecx
  int v17; // edi
  int v18; // esi
  int v19; // r8d
  int v20; // r9d
  __int64 v21; // [rsp+0h] [rbp-28h] BYREF
  __int64 v22; // [rsp+8h] [rbp-20h]
  __int64 v23; // [rsp+10h] [rbp-18h]
  __int64 v24; // [rsp+18h] [rbp-10h]
  __int64 v25; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)&v21 <= v8[1] )
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
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    sub_182756AA0(a1: v17, a2: v18, a3: v15, a4: v16, a5: v19, a6: v20, a7);
  }
  v9 = v8[5];
  if ( (unsigned __int64)(v9 + 40) > v8[4] )
  {
    v25 = a6;
    v24 = a5;
    v23 = a3;
    v9 = MEMORY[0x181EAA920](a1, a2, a3: 37784040);
  }
  else
  {
    v8[5] = v9 + 40;
    *(_DWORD *)v9 = 37784040;
    *(_DWORD *)(v9 + 4) = 0;
    *(_QWORD *)(v9 + 8) = 0;
    *(_QWORD *)(v9 + 16) = 0;
    *(_QWORD *)(v9 + 24) = 0;
    *(_QWORD *)(v9 + 32) = 0;
    v25 = a6;
    v24 = a5;
    v23 = a3;
  }
  *(_DWORD *)(v9 + 20) = 46923644;
  *(_DWORD *)(v9 + 16) = *(_DWORD *)(v7 + 374343896);
  v10 = (unsigned __int64)(v9 - v7) >> 3;
  *(_DWORD *)(v9 + 12) = v10;
  v22 = v9;
  MEMORY[0x18503B9A0](a1, a2, a3: v9, a4: v10, a5: 0);
  v14 = v22;
  *(_DWORD *)(v22 + 8) = 46026673;
  if ( (*(_DWORD *)v14 & 2) != 0 )
    goto LABEL_6;
  while ( 1 )
  {
    v14 = sub_182769900(a1: v12, a2: v13, a3: v14, a4: v11, a5: &a7);
LABEL_6:
    v11 = (v14 & 0xFFFFFFFFFFF80000LL) + 2112;
    if ( *(_BYTE *)((v14 & 0xFFFFFFFFFFF80000LL) + ((v14 - v11) >> 9) + 0x38) != 0 )
      *(_BYTE *)((v14 & 0xFFFFFFFFFFF80000LL) + ((v14 - v11) >> 9) + 0x38) = 0;
  }
}
