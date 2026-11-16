// sub_1EA1740
// rva 0x01ea1740  size 965  section .text  group text
// window base 0x181ea1740: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
void __fastcall sub_1EA1740(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6, char a7)
{
  __int64 v7; // r14
  _QWORD *v8; // r15
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // r9
  int v16; // r8d
  __int64 v17; // rdx
  __int64 v18; // r9
  int v19; // r8d
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdi
  __int64 v23; // rsi
  __int64 v24; // rdx
  unsigned int v25; // ecx
  int v26; // edi
  int v27; // esi
  int v28; // r9d
  unsigned __int64 v29; // rdx
  int v30; // r8d
  unsigned __int64 v31; // rbx
  char v32; // [rsp+0h] [rbp-38h] BYREF
  _DWORD *v33; // [rsp+8h] [rbp-30h]
  __int64 v34; // [rsp+10h] [rbp-28h]
  __int64 v35; // [rsp+18h] [rbp-20h]
  __int64 v36; // [rsp+20h] [rbp-18h]
  __int64 v37; // [rsp+28h] [rbp-10h]
  int v38; // [rsp+34h] [rbp-4h]

  if ( (unsigned __int64)&v32 <= v8[1] )
  {
    v35 = a6;
    v38 = a5;
    v37 = a3;
    sub_1EB84E0(a1, a2, a3, a4, a5, a6, a7: v32);
  }
  else if ( a5 >= 0 )
  {
    if ( v7 + (a3 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
      JUMPOUT(0x303D2B768LL);
    v9 = v7;
LABEL_9:
    v35 = a6;
    v38 = a5;
    v37 = a3;
    sub_2771080(a1, a2, a3, a4: v9);
    v36 = v14;
    v35 = v15;
    v38 = v16;
    v37 = v17;
    sub_2771080();
    v35 = v18;
    v38 = v19;
    v37 = v20;
    sub_2770780();
    sub_2771080();
    sub_2770780();
    v24 = v8[5];
    if ( (unsigned __int64)(v24 + 40) > v8[4] )
    {
      v24 = sub_1EAA920(a1: v22, a2: v23, a3: 34082880, a4: v21);
    }
    else
    {
      v8[5] = v24 + 40;
      *(_DWORD *)v24 = 34082880;
      *(_DWORD *)(v24 + 4) = 0;
      *(_QWORD *)(v24 + 8) = 0;
      *(_QWORD *)(v24 + 16) = 0;
      *(_QWORD *)(v24 + 24) = 0;
      *(_QWORD *)(v24 + 32) = 0;
    }
    v33 = (_DWORD *)v24;
    *(_DWORD *)(v24 + 20) = 46923644;
    *(_DWORD *)(v24 + 16) = *(_DWORD *)(v7 + 374343896);
    *(_DWORD *)(v24 + 12) = (unsigned __int64)(v24 - v7) >> 3;
    sub_503B9A0(a1: v22, a2: v23, a3: v24, a4: v21, a5: 0);
    v29 = (unsigned __int64)v33;
    v33[2] = 46503482;
    v30 = *(_DWORD *)v29;
    if ( (*(_DWORD *)v29 & 2) != 0 )
    {
      v25 = v29 & 0xFFF80000;
      v31 = (v29 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v29 & 0xFFFFFFFFFFF80000LL) + ((v29 - v31) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v29 & 0xFFFFFFFFFFF80000LL) + ((v29 - v31) >> 9) + 0x38) = 0;
    }
    sub_1EBCD80(a1: v26, a2: v27, a3: v29, a4: v25, a5: v30, a6: v28, a7: v32);
  }
  v35 = a6;
  v38 = a5;
  v37 = a3;
  v10 = v8[5];
  if ( (unsigned __int64)(v10 + 40) > v8[4] )
  {
    v10 = sub_1EAA920(a1, a2, a3: 36108448, a4);
  }
  else
  {
    v8[5] = v10 + 40;
    *(_DWORD *)v10 = 36108448;
    *(_DWORD *)(v10 + 4) = 0;
    *(_QWORD *)(v10 + 8) = 0;
    *(_QWORD *)(v10 + 16) = 0;
    *(_QWORD *)(v10 + 24) = 0;
    *(_QWORD *)(v10 + 32) = 0;
  }
  *(_DWORD *)(v10 + 20) = 46923644;
  *(_DWORD *)(v10 + 16) = *(_DWORD *)(v7 + 374343896);
  *(_DWORD *)(v10 + 12) = (unsigned __int64)(v10 - v7) >> 3;
  v34 = v10;
  sub_503B9A0(a1, a2, a3: v10, a4, a5: 0);
  sub_2769900(a1: v12, a2: v13, a3: v34, a4: v11, a5: &a7);
  goto LABEL_9;
}
