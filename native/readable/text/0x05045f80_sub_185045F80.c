// sub_5045F80
// rva 0x05045f80  size 806  section .text  group text
// window base 0x185045f80: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
void __fastcall sub_5045F80(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r14
  __int64 v6; // r15
  int v7; // ecx
  __int64 *v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rax
  double v13; // xmm0_8
  double v14; // xmm1_8
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // rdx
  double v20; // xmm1_8
  __int64 *v21; // rbx
  __int64 v22; // rcx
  __int64 v23; // rdi
  __int64 v24; // rsi
  double v25; // xmm0_8
  __int64 v26; // rdx
  __int64 v27; // rcx
  int v28; // [rsp+0h] [rbp-68h] BYREF
  __int64 v29; // [rsp+28h] [rbp-40h]
  _BYTE v30[16]; // [rsp+30h] [rbp-38h] BYREF
  __int64 *v31; // [rsp+40h] [rbp-28h]
  void (__fastcall *v32)(__int64, __int64, __int64, __int64 *); // [rsp+48h] [rbp-20h]
  void (__fastcall *v33)(__int64, __int64, __int64, _BYTE *, double); // [rsp+50h] [rbp-18h]
  __int64 *v34; // [rsp+58h] [rbp-10h]
  __int64 v35; // [rsp+60h] [rbp-8h]

  v35 = a5;
  if ( (unsigned __int64)&v28 <= *(_QWORD *)(v6 + 8) )
  {
    sub_1EB84E0(a1, a2, a3, a4: a3);
    v27 = v29;
    *(_DWORD *)(v29 + 136) = 2;
    __faststorefence();
    v19 = v27;
    goto LABEL_17;
  }
  v29 = a3;
  if ( *(_BYTE *)(a3 + 102) != 0
    && (v7 = *(unsigned __int8 *)(a3 + 102), *(_BYTE *)(a3 + 102) = 0, (MEMORY[0xe9691ec]/* 0xe9691ec */ & v7) != 0)
    || *(_BYTE *)(a3 + 100) != 0 )
  {
    if ( *(int *)(v6 + 16) > 0 )
      return;
LABEL_21:
    sub_277F280();
    return;
  }
  if ( a5 >= 1 )
  {
    v8 = (__int64 *)v30;
    v34 = (__int64 *)v30;
    if ( *(double *)(v5 + 376178920) == 0.0 )
    {
      v33 = (void (__fastcall *)(__int64, __int64, __int64, _BYTE *, double))MEMORY[0xe572c40]/* 0xe572c40 */;
      MEMORY[0xe572c40]/* 0xe572c40 */(a1, a2, a3, a4: v30, a5: MEMORY[0xe987628]/* 0xe987628 */);
      v8 = v34;
      *(double *)(v5 + 376178920) = MEMORY[0xe987628]/* 0xe987628 */ / (double)*v34;
    }
    else
    {
      v33 = (void (__fastcall *)(__int64, __int64, __int64, _BYTE *, double))MEMORY[0xe572c40]/* 0xe572c40 */;
    }
    v32 = (void (__fastcall *)(__int64, __int64, __int64, __int64 *))MEMORY[0xe572170]/* 0xe572170 */;
    MEMORY[0xe572170]/* 0xe572170 */(a1, a2, a3, a4: v8);
    v11 = *v34;
    v12 = v29;
    *(_QWORD *)(v29 + 128) = v35;
    v13 = *(double *)(v5 + 376178920);
    *(_DWORD *)(v12 + 136) = 6;
    __faststorefence();
    v14 = (double)v11 * v13;
    v15 = (__int64)v14;
    if ( (__int64)v14 == MEMORY[0xe987620]/* 0xe987620 */ )
    {
      if ( __builtin_isnan(v14) )
      {
        v15 = 0;
      }
      else if ( v14 > 0.0 )
      {
        v15 = ~v15;
      }
    }
    v34 = (__int64 *)v15;
    v16 = sub_63606A0(a1: v9, a2: v10, a3: v5 + 376668552);
    v19 = v29;
    if ( v16 == 0 )
    {
      *(_DWORD *)(v29 + 136) = 2;
      __faststorefence();
      v20 = 0.0;
LABEL_17:
      v21 = (__int64 *)v30;
      v31 = (__int64 *)v30;
      if ( v20 == *(double *)(v5 + 376178920) )
      {
        v33(a1: v17, a2: v18, a3: v19, a4: v30, a5: MEMORY[0xe987628]/* 0xe987628 */);
        v21 = v31;
        *(double *)(v5 + 376178920) = MEMORY[0xe987628]/* 0xe987628 */ / (double)*v31;
      }
      v32(a1: v17, a2: v18, a3: v19, a4: v21);
      v25 = (double)*v31 * *(double *)(v5 + 376178920);
      v26 = (__int64)v25;
      if ( (__int64)v25 == MEMORY[0xe987620]/* 0xe987620 */ )
      {
        if ( __builtin_isnan(v25) )
        {
          v26 = 0;
        }
        else if ( v25 > 0.0 )
        {
          v26 = ~v26;
        }
      }
      v31 = (__int64 *)(v35 - (v26 - (_QWORD)v34));
      sub_50462C0(a1: v23, a2: v24, a3: v29, a4: v22, a5: 1, a6: v31);
    }
  }
  if ( *(int *)(v6 + 16) <= 0 )
    goto LABEL_21;
}
