// sub_1E9A4A0
// rva 0x01e9a4a0  size 410  section .text  group text
// window base 0x181e9a4a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
void __fastcall sub_1E9A4A0(__int64 a1, __int64 a2, int a3, int a4, __int64 a5, int a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rdx
  unsigned __int64 v11; // rax
  _DWORD *v12; // rcx
  _DWORD *v13; // rdx
  _DWORD *v14; // rbx
  _DWORD *v15; // rcx
  __int64 v16; // rdx
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rdx
  double v22; // xmm0_8
  int v23; // [rsp+0h] [rbp-28h] BYREF
  __int64 v24; // [rsp+18h] [rbp-10h]
  __int64 v25; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)&v23 <= *(_QWORD *)(v7 + 8) )
  {
    v22 = sub_1EB83C0(a1, a2, a3, a4, a5, a6, a7: v23);
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    sub_1E9A640(a1: v22);
    return;
  }
  v25 = a5;
  if ( a5 == v6 )
  {
    if ( *(int *)(v7 + 16) > 0 )
      return;
LABEL_22:
    sub_277F280();
    return;
  }
  v24 = v6 + 376656712;
  sub_207FA40(a1, a2, a3: v6 + 376656712);
  v10 = *(unsigned int *)(v6 + 376613812);
  v11 = (unsigned __int64)(v25 - v6) >> 3;
  if ( (_DWORD)v10 != 0 )
  {
    v12 = (_DWORD *)(v6 + 8LL * *(unsigned int *)(v6 + 8 * v10 + 8));
    v13 = (_DWORD *)(v6 + 8 * v10);
    while ( v12 != (_DWORD *)v6 )
    {
      v14 = (_DWORD *)(v6 + 8LL * (unsigned int)v12[2]);
      if ( *(int *)(v7 + 16) <= 0 )
      {
        LODWORD(v11) = sub_277F280(a1: v8, a2: v9, a3: v13);
        v13 = v15;
        v12 = v14;
      }
      else
      {
        v13 = v12;
        v12 = (_DWORD *)(v6 + 8LL * (unsigned int)v12[2]);
      }
    }
    v13[2] = v11;
    if ( (*v13 & 2) != 0 )
    {
      v17 = (unsigned __int64)v13 - v6;
      if ( v17 != 0 )
        v17 += v6;
      v18 = v17 & 0xFFFFFFFFFFF80000LL;
      v19 = (v17 - ((v17 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9;
      if ( *(_BYTE *)(v18 + v19 + 56) != 0 )
        *(_BYTE *)(v18 + v19 + 56) = 0;
    }
  }
  else
  {
    v16 = v6 + 376613784;
    *(_DWORD *)(v6 + 376613812) = v11;
    if ( (*(_DWORD *)(v6 + 376613784) & 2) != 0 )
    {
      v20 = v16 & 0xFFFFFFFFFFF80000LL;
      v21 = (v16 - ((v16 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9;
      if ( *(_BYTE *)(v20 + v21 + 56) != 0 )
        *(_BYTE *)(v20 + v21 + 56) = 0;
    }
    ++*(_QWORD *)(v6 + 376613824);
    __faststorefence();
    sub_207F840(a1: v8, a2: v9, a3: v6 + 376656744);
  }
  sub_207FC60(a1: v8, a2: v9, a3: v24);
  if ( *(int *)(v7 + 16) <= 0 )
    goto LABEL_22;
}
