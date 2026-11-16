// sub_15A7080
// rva 0x015a7080  size 723  section .text  group text
// window base 0x1815a7080: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
void __fastcall sub_15A7080(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rdi
  __int64 v9; // rsi
  _DWORD *v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rcx
  int v13; // ebx
  unsigned int v14; // r8d
  __int64 v15; // rbp
  unsigned __int64 v16; // r9
  unsigned __int64 v17; // rdi
  unsigned __int64 i; // r9
  __int64 v19; // r8
  __int64 v20; // rdi
  unsigned __int64 v21; // rsi
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  float v25; // xmm0_4
  int v26; // edx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdi
  __int64 v30; // rsi
  unsigned __int64 v31; // rbx
  unsigned __int64 v32; // rcx
  char v33; // [rsp+0h] [rbp-38h] BYREF
  __int64 v34; // [rsp+10h] [rbp-28h]
  int v35; // [rsp+1Ch] [rbp-1Ch]
  __int64 v36; // [rsp+20h] [rbp-18h]
  _DWORD *v37; // [rsp+28h] [rbp-10h]
  int v38; // [rsp+30h] [rbp-8h]
  int v39; // [rsp+34h] [rbp-4h]

  v37 = (_DWORD *)a3;
  v39 = a5;
  if ( (unsigned __int64)&v33 <= *(_QWORD *)(v7 + 8) )
  {
    sub_1EB84E0();
    goto LABEL_32;
  }
  sub_15A4C20(a1, a2, a3, a4, a5, a6, a7: v33);
  v10 = v37;
  v11 = (unsigned int)v37[3];
  v12 = v6 + 8 * v11;
  if ( (_DWORD)v11 == 0 )
  {
LABEL_32:
    v36 = v12;
    sub_2771080();
    goto LABEL_33;
  }
  v13 = *(_DWORD *)(v6 + 8 * v11 + 8);
  if ( v13 != 0x40000000 )
  {
    v14 = v39;
    if ( v39 >= 0 )
    {
      v35 = v37[3];
      v15 = *(_QWORD *)(v7 + 40);
      v16 = *(_QWORD *)(v7 + 32);
      v17 = (4LL * (unsigned int)v39 + 19) & 0x7FFFFFFF8LL;
      if ( v17 >= 0x20000 || v15 + v17 > v16 )
      {
        v38 = v13;
        v36 = v6 + 8 * v11;
        v15 = sub_1EAA840(a1: v17, a2: 35801424, a3: 35801424, a4: v12, a5: (unsigned int)v39, a6: v16);
        v12 = v36;
        v10 = v37;
      }
      else
      {
        *(_QWORD *)(v7 + 40) = v15 + v17;
        *(_QWORD *)v15 = 35801424;
        *(_DWORD *)(v15 + 8) = v14;
        *(_DWORD *)(v15 + 12) = 0;
        if ( v17 - 16 >= 0x800 )
        {
          v38 = v13;
          v36 = v6 + 8 * v11;
          memset((void *)(v15 + 16), 0, v17 - 16);
          v17 += v15;
          v12 = v36;
        }
        else
        {
          for ( i = 16; v17 > i; i += 8LL )
            *(_QWORD *)(v15 + i) = 0;
        }
        v38 = v13;
      }
      v34 = v15;
      v36 = v12;
      sub_15A73C0(a1: v17, a2: v10, a3: v10, a4: v12, a5: v12, a6: v15);
      v24 = (__int64)v37;
      v37[3] = (unsigned __int64)(v34 - v6) >> 3;
      if ( (*(_DWORD *)v24 & 2) != 0 )
      {
        v31 = (v24 & 0xFFFFFFFFFFF80000LL) + 2112;
        if ( *(_BYTE *)((v24 & 0xFFFFFFFFFFF80000LL) + ((v24 - v31) >> 9) + 0x38) != 0 )
          *(_BYTE *)((v24 & 0xFFFFFFFFFFF80000LL) + ((v24 - v31) >> 9) + 0x38) = 0;
      }
      if ( *(_DWORD *)(v24 + 40) / 2 > *(_DWORD *)(v24 + 36) )
      {
        sub_15A4C20(a1: v20, a2: v21, a3: v24, a4: *(unsigned int *)(v24 + 40), a5: v22, a6: v23, a7: v33);
        sub_15A73C0(a1: v29, a2: v30, a3: v37, a4: v28, a5: v34, a6: v36);
        v27 = (__int64)v37;
        v37[3] = v35;
        if ( (*(_DWORD *)v27 & 2) != 0 )
        {
          v32 = (v27 & 0xFFFFFFFFFFF80000LL) + 2112;
          if ( *(_BYTE *)((v27 & 0xFFFFFFFFFFF80000LL) + ((v27 - v32) >> 9) + 0x38) != 0 )
            *(_BYTE *)((v27 & 0xFFFFFFFFFFF80000LL) + ((v27 - v32) >> 9) + 0x38) = 0;
        }
        goto LABEL_19;
      }
      v25 = (float)v39 * *(float *)(v24 + 32);
      v26 = (int)v25;
      if ( (int)v25 != 0x80000000 )
      {
LABEL_18:
        *(_DWORD *)(v24 + 40) = v26;
        v27 = v24;
LABEL_19:
        if ( *(int *)(v7 + 16) <= 0 )
          sub_277F280(a1: v20, a2: v21, a3: v27);
        return;
      }
LABEL_34:
      if ( __builtin_isnan(v25) )
      {
        v26 = 0;
      }
      else if ( v25 > 0.0 )
      {
        v26 = ~v26;
      }
      goto LABEL_18;
    }
LABEL_33:
    v25 = sub_2770E80(a1: v8, a2: v9, a3: v14, a4: v12);
    goto LABEL_34;
  }
  v19 = (unsigned int)v39;
  v37[10] = 0x7FFFFFFF;
  if ( *(int *)(v7 + 16) <= 0 )
  {
    v36 = v6 + 8 * v11;
    sub_277F280(a1: v8, a2: v9, a3: v10, a4: v12, a5: v19);
  }
}
