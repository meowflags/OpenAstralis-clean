// sub_18278A2A0
// rva 0x0278a2a0  size 353  section .text  group text
// window base 0x18278a2a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18278A2A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v8; // rdi
  __int64 v9; // rsi
  _BYTE *v10; // rbx
  unsigned __int64 i; // rbp
  __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // rbp
  int v15; // ecx
  _BOOL8 v16; // rsi
  _BYTE v17[60]; // [rsp+20h] [rbp-68h] BYREF
  BOOL v18; // [rsp+5Ch] [rbp-2Ch]
  __int64 v19; // [rsp+60h] [rbp-28h]
  unsigned __int64 v20; // [rsp+68h] [rbp-20h]
  _QWORD *v21; // [rsp+70h] [rbp-18h]
  __int64 v22; // [rsp+78h] [rbp-10h]
  unsigned __int64 v23; // [rsp+80h] [rbp-8h]

  v23 = a5;
  v22 = a6;
  if ( a5 == 0 || (unsigned int)sub_18278A5A0(a1, a2, a3: v6 + 376652416) == 0 || v22 == 0 )
    return 0xFFFFFFFFLL;
  v10 = v17;
  v21 = v17;
  for ( i = v22 + v23 - 1; ; i = v21[1] - 1LL )
  {
    v20 = i;
    if ( i <= v23 )
      return 0;
    if ( MEMORY[0x10E44718](a1: v8, a2: v9, a3: v10, a4: i, a5: 48) == 0 )
      return 0xFFFFFFFFLL;
    v14 = v21[1];
    v19 = v14;
    v15 = *((_DWORD *)v21 + 10);
    v16 = v15 == 0x40000;
    v18 = v15 == 0x40000;
    if ( v15 == 0x40000 )
      break;
    if ( (unsigned int)MEMORY[0x10E444A0](a1: v13, a2: v16, a3: 0, a4: v14, a5: 0x8000) == 0 )
      return 0xFFFFFFFFLL;
LABEL_9:
    v10 = v21;
  }
  if ( (unsigned int)MEMORY[0x10E44B58](a1: v13, a2: v16, a3: v12, a4: v14) != 0 )
    goto LABEL_9;
  return 0xFFFFFFFFLL;
}
