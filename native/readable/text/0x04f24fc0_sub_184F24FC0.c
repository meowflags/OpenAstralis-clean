// sub_4F24FC0
// rva 0x04f24fc0  size 382  section .text  group text
// window base 0x184f24fc0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F24FC0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // rcx
  __int64 v8; // rbx
  unsigned __int64 v9; // r9
  unsigned int v10; // edi
  unsigned __int64 v11; // rcx
  __int64 v12; // rdi
  unsigned __int64 v13; // rsi
  unsigned __int64 i; // r9
  __int64 v15; // rcx
  __int64 v16; // rsi
  __int64 result; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // [rsp+0h] [rbp-28h] BYREF
  __int64 v25; // [rsp+8h] [rbp-20h]
  __int64 v26; // [rsp+10h] [rbp-18h]
  __int64 v27; // [rsp+18h] [rbp-10h]
  unsigned int v28; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)&v24 <= *(_QWORD *)(v6 + 8) )
  {
    v26 = a5;
    v27 = a3;
    sub_1EB84E0();
  }
  else if ( a5 != v5 )
  {
    v7 = *(unsigned int *)(a5 + 4);
    if ( (_DWORD)v7 == 0 )
    {
LABEL_18:
      sub_2771080();
      __builtin_debugtrap();
      __builtin_debugtrap();
      return sub_4F25140(a1: v20, a2: v21, a3: v18, a4: v19, a5: v22, a6: v23);
    }
    v8 = *(_QWORD *)(v6 + 40);
    v9 = *(_QWORD *)(v6 + 32);
    v10 = *(_DWORD *)(v5 + 8 * v7 + 8);
    v11 = (unsigned int)*(char *)(a5 + 12);
    v12 = v10 >> *(_BYTE *)(a5 + 12);
    v13 = ((unsigned int)v12 + 19LL) & 0x1FFFFFFF8LL;
    if ( v13 >= 0x20000 || (v11 = v8 + v13, v8 + v13 > v9) )
    {
      v28 = v12;
      v26 = a5;
      v27 = a3;
      v8 = sub_1EAA840(a1: v12, a2: v13, a3: 34082368, a4: v11, a5: (unsigned int)v12, a6: v9);
      LODWORD(v12) = v28;
      a5 = v26;
    }
    else
    {
      *(_QWORD *)(v6 + 40) = v11;
      *(_QWORD *)v8 = 34082368;
      *(_DWORD *)(v8 + 8) = v12;
      *(_DWORD *)(v8 + 12) = 0;
      if ( v13 - 16 >= 0x800 )
      {
        v28 = v12;
        v26 = a5;
        v27 = a3;
        memset((void *)(v8 + 16), 0, v13 - 16);
        v11 = 0;
        LODWORD(v12) = v28;
      }
      else
      {
        for ( i = 16; v13 > i; i += 8LL )
          *(_QWORD *)(v8 + i) = 0;
      }
      v27 = a3;
    }
    v26 = a5;
    v28 = v12;
    v25 = v8;
    sub_4FF2FC0(a1: v8, a2: 0, a3: a5, a4: v11, a5: 0, a6: (unsigned int)v12);
    result = sub_4F239A0(a1: v28, a2: v16, a3: v27, a4: v15, a5: v25, a6: 0);
    if ( *(int *)(v6 + 16) <= 0 )
      return sub_277F280(a1: v28);
    return result;
  }
  v27 = a3;
  sub_2771080();
  goto LABEL_18;
}
