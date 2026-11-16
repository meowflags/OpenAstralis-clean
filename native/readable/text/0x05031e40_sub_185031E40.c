// sub_5031E40
// rva 0x05031e40  size 1082  section .text  group text
// window base 0x185031e40: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_5031E40(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // r15
  unsigned int v10; // ecx
  __int64 v11; // rbp
  signed __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // r8
  __int64 v15; // rcx
  void (__fastcall *v16)(__int64, signed __int64, _DWORD *, _QWORD, __int64); // rcx
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rcx
  __int64 v21; // rdi
  __int64 v22; // rsi
  int v23; // ecx
  int v24; // edi
  int v25; // esi
  int v26; // r8d
  int v27; // r9d
  __int64 v28; // rdi
  __int64 v29; // rsi
  __int64 v30; // rcx
  _DWORD *v31; // rdx
  __int64 v32; // r8
  __int64 result; // rax
  __int64 v34; // r8
  __int64 v35; // r8
  int v36; // eax
  __int64 v37; // r8
  __int64 v38; // rcx
  _DWORD *v39; // rdx
  __int64 v40; // r8
  __int64 v41; // rax
  __int64 v42; // rdi
  __int64 v43; // rsi
  __int64 v44; // r8
  __int64 v45; // r8
  __int64 v46; // rdx
  _DWORD *v47; // rbp
  __int64 v48; // r8
  int v49; // [rsp+0h] [rbp-48h] BYREF
  __int64 v50; // [rsp+10h] [rbp-38h]
  unsigned int v51; // [rsp+1Ch] [rbp-2Ch]
  __int64 v52; // [rsp+20h] [rbp-28h]
  _DWORD *v53; // [rsp+28h] [rbp-20h]
  int v54; // [rsp+34h] [rbp-14h]
  __int64 v55; // [rsp+38h] [rbp-10h]
  unsigned int v56; // [rsp+44h] [rbp-4h]

  v53 = a3;
  v52 = a5;
  if ( (unsigned __int64)&v49 <= *(_QWORD *)(v9 + 8) )
  {
    sub_1EB84E0();
    goto LABEL_40;
  }
  v51 = *a3 >> 3;
  v10 = *(_DWORD *)(v8 + 8LL * v51 + 48);
  v56 = v10;
  v55 = (int)v10;
  if ( v10 == 0 )
    goto LABEL_23;
  v11 = *(unsigned int *)((char *)a3 + (int)v10);
  if ( (_DWORD)v11 == 0 || v9 == *(_QWORD *)(v8 + 376351704) )
    goto LABEL_23;
  v12 = *(_QWORD *)(v9 + 64);
  v13 = *(_QWORD *)(v8 + 8 * v11 + 16);
  if ( v13 == 0 )
  {
    if ( __sync_val_compare_and_swap((volatile signed __int64 *)(v8 + 8 * v11 + 16), 0, v12) == 0 )
      goto LABEL_7;
    goto LABEL_23;
  }
  if ( v13 != v12 || (v36 = *(_DWORD *)(v8 + 8 * v11 + 28) + 1) < 0 )
  {
LABEL_23:
    sub_208CC20();
    a3 = v53;
    goto LABEL_7;
  }
  *(_DWORD *)(v8 + 8 * v11 + 28) = v36;
LABEL_7:
  v14 = (unsigned int)a3[3];
  if ( (_DWORD)v14 == 0 )
  {
LABEL_40:
    v41 = sub_276BEE0();
    goto LABEL_29;
  }
  v54 = *(_DWORD *)(v8 + 8 * v14 + 28);
  v15 = *(unsigned int *)(v8 + 374343896);
  if ( v54 != 0 )
  {
    v46 = *(_QWORD *)(v9 + 40);
    if ( (unsigned __int64)(v46 + 40) <= *(_QWORD *)(v9 + 32) )
    {
LABEL_42:
      *(_QWORD *)(v9 + 40) = v46 + 40;
      *(_DWORD *)v46 = 37751696;
      *(_DWORD *)(v46 + 4) = 0;
      *(_QWORD *)(v46 + 8) = 0;
      *(_QWORD *)(v46 + 16) = 0;
      *(_QWORD *)(v46 + 24) = 0;
      *(_QWORD *)(v46 + 32) = 0;
LABEL_43:
      *(_DWORD *)(v46 + 20) = 46923644;
      *(_DWORD *)(v46 + 16) = v15;
      *(_DWORD *)(v46 + 12) = (unsigned __int64)(v46 - v8) >> 3;
      v50 = v46;
      sub_503B9A0(a1: v13, a2: v12, a3: v46, a4: v15, a5: 0);
      v41 = v50;
LABEL_29:
      v38 = v56;
      if ( v56 != 0 )
      {
        v39 = v53;
        v40 = *(unsigned int *)((char *)v53 + v55);
        v38 = *(unsigned int *)(v8 + 8 * v40 + 28);
        if ( (_DWORD)v38 == 1 )
        {
          *(_QWORD *)(v8 + 8 * v40 + 16) = 0;
          __faststorefence();
        }
        else
        {
          *(_DWORD *)(v8 + 8 * v40 + 28) = v38 - 1;
        }
        if ( (_DWORD)v38 == 1 )
          goto LABEL_34;
        while ( 1 )
        {
          while ( 1 )
          {
            v41 = sub_2769900(a1: v42, a2: v43, a3: v41, a4: v38, a5: &a7);
LABEL_34:
            v44 = *(unsigned int *)(v8 + 8 * v40 + 4);
            if ( (_DWORD)v44 != 0 )
            {
              v45 = *(unsigned int *)(v8 + 8 * v44 + 8);
              if ( (_DWORD)v45 != 0 )
              {
                v38 = *(unsigned int *)(v8 + 8 * v45 + 16);
                if ( (_DWORD)v38 != 0 )
                  break;
              }
            }
          }
          v47 = v39;
          v48 = (_DWORD)v38 != 0;
          v50 = v41;
LABEL_48:
          sub_208CCA0(a1: v42, a2: v43, a3: v47, a4: v38, a5: v48);
          v41 = v50;
        }
      }
      v48 = 0xFFFFFFFFLL;
      v50 = v41;
      v47 = v53;
      goto LABEL_48;
    }
LABEL_49:
    v51 = *(_DWORD *)(v8 + 374343896);
    v46 = sub_1EAA920(a1: v13, a2: v12, a3: 37751696);
    v15 = v51;
    goto LABEL_43;
  }
  if ( a3[12] != 0 )
  {
    v46 = *(_QWORD *)(v9 + 40);
    if ( (unsigned __int64)(v46 + 40) <= *(_QWORD *)(v9 + 32) )
      goto LABEL_42;
    goto LABEL_49;
  }
  v16 = (void (__fastcall *)(__int64, signed __int64, _DWORD *, _QWORD, __int64))(v7 + *(_QWORD *)(v8 + 8LL * v51 + 336));
  v16(a1: v13, a2: v12, a3, a4: v16, a5: v52);
  if ( v52 == v8 )
    goto LABEL_40;
  sub_6362940(a1: v18, a2: v19, a3: v52, a4: v17, a5: v53);
  ((void (__fastcall *)(__int64, __int64, _DWORD *, __int64, __int64))(v7 + *(_QWORD *)(v8 + 8LL * v51 + 232)))(
    a1: v21,
    a2: v22,
    a3: v53,
    a4: v20,
    a5: v52);
  sub_5032280(a1: v24, a2: v25, a3: (_DWORD)v53, a4: v23, a5: v26, a6: v27, a7: v49);
  v30 = v56;
  if ( v56 == 0 )
  {
    v37 = 0xFFFFFFFFLL;
    v31 = v53;
    goto LABEL_27;
  }
  v31 = v53;
  v32 = *(unsigned int *)((char *)v53 + v55);
  result = *(unsigned int *)(v8 + 8 * v32 + 28);
  if ( (_DWORD)result == 1 )
  {
    *(_QWORD *)(v8 + 8 * v32 + 16) = 0;
    __faststorefence();
  }
  else
  {
    v30 = (unsigned int)(result - 1);
    *(_DWORD *)(v8 + 8 * v32 + 28) = v30;
  }
  if ( (_DWORD)result == 1 )
  {
    v34 = *(unsigned int *)(v8 + 8 * v32 + 4);
    if ( (_DWORD)v34 != 0 )
    {
      v35 = *(unsigned int *)(v8 + 8 * v34 + 8);
      if ( (_DWORD)v35 != 0 && *(_DWORD *)(v8 + 8 * v35 + 16) != 0 )
      {
        v37 = 1;
LABEL_27:
        result = sub_208CCA0(a1: v28, a2: v29, a3: v31, a4: v30, a5: v37);
      }
    }
  }
  if ( *(int *)(v9 + 16) <= 0 )
    return sub_277F280();
  return result;
}
