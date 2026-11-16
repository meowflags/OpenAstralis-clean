// sub_5042FE0
// rva 0x05042fe0  size 146  section .text  group text
// window base 0x185042fe0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
_DWORD *__fastcall sub_5042FE0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // r9
  char v11; // [rsp+0h] [rbp-18h] BYREF
  _DWORD *v12; // [rsp+8h] [rbp-10h]
  __int64 v13; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v11 <= *(_QWORD *)(v4 + 8) )
  {
    v13 = a3;
    sub_1EB84E0();
  }
  else
  {
    v5 = v3 + 366170872;
    if ( *(_BYTE *)(v3 + 377211498) == 0 )
      goto LABEL_3;
  }
  v13 = a3;
  v5 = sub_15ACE20(a1, a2, a3: v3 + 43297384);
  a3 = v13;
LABEL_3:
  v13 = a3;
  v12 = (_DWORD *)sub_6117440(a1: v3 + 376362392, a2: 0xFFFFFFFFLL, a3: v5, a4: v13, a5: v13, a6: 0);
  sub_5030BA0(a1: v7, a2: v8, a3: v12, a4: v6, a5: 1u, a6: v9, a7: v11);
  if ( *(int *)(v4 + 16) <= 0 )
    sub_277F280();
  return v12;
}
