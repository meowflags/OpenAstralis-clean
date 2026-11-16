// sub_501CF00
// rva 0x0501cf00  size 134  section .text  group text
// window base 0x18501cf00: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
void __fastcall sub_501CF00(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  unsigned int v9; // r9d
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // [rsp+0h] [rbp-18h] BYREF
  __int64 v15; // [rsp+8h] [rbp-10h]
  unsigned int v16; // [rsp+10h] [rbp-8h]
  unsigned int v17; // [rsp+14h] [rbp-4h]

  if ( (unsigned __int64)&v14 <= *(_QWORD *)(v8 + 8) )
  {
    sub_1EB84E0();
    goto LABEL_7;
  }
  if ( a5 == v7 )
  {
LABEL_7:
    sub_2771080();
    goto LABEL_8;
  }
  v9 = *(_DWORD *)(a5 + 8) >> 1;
  if ( v9 > a3 )
  {
    if ( *(int *)(v8 + 16) <= 0 )
      sub_277F280();
    return;
  }
LABEL_8:
  v15 = a5;
  v17 = a3;
  v16 = v9;
  v10 = sub_632ACC0(a1, a2, a3: v7 + 376643464, a4: a3, a5: a3);
  if ( v10 != v7 )
    sub_2769900(a1: v12, a2: v13, a3: v10, a4: v11, a5: &a7);
  sub_2771080(a1: v12, a2: v13, a3: v17, a4: v11, a5: v15, a6: v16);
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
  __builtin_debugtrap();
  __builtin_debugtrap();
  sub_501CFA0();
}
