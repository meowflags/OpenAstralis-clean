// sub_1ECE500
// rva 0x01ece500  size 958  section .text  group text
// window base 0x181ece500: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
_DWORD *__fastcall sub_1ECE500(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  _DWORD *v7; // rbp
  __int64 v8; // r13
  __int64 v9; // r14
  __int64 v10; // r15
  _DWORD *result; // rax
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rsi
  int v18; // r9d
  __int64 v19; // r8
  __int64 v20; // rdi
  __int64 v21; // rsi
  _DWORD *v22; // rax
  __int64 v23; // rsi
  int v24; // r9d
  unsigned int v25; // ecx
  __int64 v26; // rdx
  signed __int64 v27; // rbp
  _DWORD *v28; // rdi
  signed __int64 v29; // rax
  __int64 v30; // rdi
  __int64 v31; // rsi
  _DWORD *v32; // rcx
  __int64 v33; // rdx
  int v34; // r8d
  __int64 v35; // rdx
  __int64 v36; // rdx
  int v37; // eax
  __int64 v38; // rax
  __int64 v39; // rdi
  __int64 v40; // rsi
  __int64 v41; // rcx
  __int64 v42; // rdx
  int v43; // r8d
  __int64 v44; // rdx
  __int64 v45; // rdx
  __int64 v46; // r8
  int v47; // [rsp+0h] [rbp-48h] BYREF
  _DWORD *v48; // [rsp+10h] [rbp-38h]
  _DWORD *v49; // [rsp+18h] [rbp-30h]
  _DWORD *v50; // [rsp+20h] [rbp-28h]
  __int64 v51; // [rsp+28h] [rbp-20h]
  _DWORD *v52; // [rsp+30h] [rbp-18h]
  unsigned int v53; // [rsp+3Ch] [rbp-Ch]
  char *v54; // [rsp+40h] [rbp-8h]

  v52 = (_DWORD *)a3;
  if ( (unsigned __int64)&v47 <= *(_QWORD *)(v10 + 8) )
  {
    v51 = a5;
    v38 = sub_1EB84E0(a1, a2, a3, a4, a5, a6, a7: v47);
    v41 = v53;
    if ( v53 == 0 )
    {
      v46 = 0xFFFFFFFFLL;
      v48 = (_DWORD *)v38;
      v7 = v49;
      goto LABEL_58;
    }
    v7 = v49;
    v42 = *(unsigned int *)&v54[(_QWORD)v49];
    v43 = *(_DWORD *)(v9 + 8 * v42 + 28);
    if ( v43 == 1 )
    {
      *(_QWORD *)(v9 + 8 * v42 + 16) = 0;
      __faststorefence();
      goto LABEL_47;
    }
LABEL_55:
    v41 = (unsigned int)(v43 - 1);
    *(_DWORD *)(v9 + 8 * v42 + 28) = v41;
LABEL_47:
    if ( v43 == 1 )
      goto LABEL_49;
    while ( 1 )
    {
      while ( 1 )
      {
        v38 = sub_2769900(a1: v39, a2: v40, a3: v38, a4: v41, a5: &a7);
LABEL_49:
        v44 = *(unsigned int *)(v9 + 8 * v42 + 4);
        if ( (_DWORD)v44 != 0 )
        {
          v45 = *(unsigned int *)(v9 + 8 * v44 + 8);
          if ( (_DWORD)v45 != 0 )
          {
            v41 = *(unsigned int *)(v9 + 8 * v45 + 16);
            if ( (_DWORD)v41 != 0 )
              break;
          }
        }
      }
      v46 = 1;
      v48 = (_DWORD *)v38;
LABEL_58:
      sub_208CCA0(a1: v39, a2: v40, a3: v7, a4: v41, a5: v46);
      v38 = (__int64)v48;
      v7 = v49;
    }
  }
  v51 = a5;
  result = sub_1EC95E0(a1, a2, a3, a4: a5, a5, a6);
  if ( result != (_DWORD *)v9 )
  {
    if ( *(int *)(v10 + 16) > 0 )
      return result;
    return (_DWORD *)sub_277F280();
  }
  v54 = (char *)(v8 + *(_QWORD *)(v9 + 8LL * (*v52 >> 3) + 112));
  v14 = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *, _DWORD *))v54)(a1: v12, a2: v13, a3: v52, a4: v52);
  if ( v14 == v9 || *(_DWORD *)(v14 + 20) != 0 )
  {
    result = (_DWORD *)sub_1ECE8C0(a1: v16, a2: v17, a3: (_DWORD)v52, a4: v15, a5: v51, a6: v18, a7: v47);
    if ( *(int *)(v10 + 16) <= 0 )
      return (_DWORD *)sub_277F280();
  }
  else
  {
    v19 = (unsigned int)v52[2];
    if ( (_DWORD)v19 == 0 )
    {
      sub_2771080();
LABEL_54:
      v38 = sub_2771080();
      goto LABEL_55;
    }
    result = (_DWORD *)sub_59E49A0(a1: v16, a2: v17, a3: v9 + 8 * v19, a4: v15, a5: v51);
    if ( result == (_DWORD *)v9 || *result >> 3 != 4262015 )
    {
      v50 = result;
      v22 = (_DWORD *)((__int64 (__fastcall *)(__int64, __int64, _DWORD *))v54)(a1: v20, a2: v21, a3: v52);
      if ( v22 != (_DWORD *)v9 )
      {
        v49 = v22;
        v25 = *(_DWORD *)(v9 + 8LL * (*v22 >> 3) + 48);
        if ( v25 != 0 )
        {
          v26 = *(unsigned int *)((char *)v22 + (int)v25);
          if ( (_DWORD)v26 != 0 )
          {
            if ( v10 == *(_QWORD *)(v9 + 376351704) )
            {
              v54 = (char *)(int)v25;
              v53 = v25;
              v28 = v22;
            }
            else
            {
              v27 = *(_QWORD *)(v10 + 64);
              v23 = *(_QWORD *)(v9 + 8 * v26 + 16);
              if ( v23 != 0 )
              {
                v28 = v22;
                if ( v23 == v27 )
                {
                  v37 = *(_DWORD *)(v9 + 8 * v26 + 28) + 1;
                  if ( v37 >= 0 )
                  {
                    *(_DWORD *)(v9 + 8 * v26 + 28) = v37;
                    v54 = (char *)(int)v25;
                    v53 = v25;
LABEL_18:
                    result = (_DWORD *)sub_1ECE8C0(
                                         a1: (_DWORD)v28,
                                         a2: v23,
                                         a3: (_DWORD)v52,
                                         a4: v25,
                                         a5: v51,
                                         a6: v24,
                                         a7: v47);
                    if ( v53 != 0 )
                    {
                      v32 = v49;
                      v33 = *(unsigned int *)&v54[(_QWORD)v49];
                      v34 = *(_DWORD *)(v9 + 8 * v33 + 28);
                      if ( v34 == 1 )
                      {
                        *(_QWORD *)(v9 + 8 * v33 + 16) = 0;
                        __faststorefence();
                      }
                      else
                      {
                        *(_DWORD *)(v9 + 8 * v33 + 28) = v34 - 1;
                      }
                      if ( v34 != 1 )
                        goto LABEL_22;
                      v35 = *(unsigned int *)(v9 + 8 * v33 + 4);
                      if ( (_DWORD)v35 == 0 )
                        goto LABEL_22;
                      v36 = *(unsigned int *)(v9 + 8 * v35 + 8);
                      if ( (_DWORD)v36 == 0 || *(_DWORD *)(v9 + 8 * v36 + 16) == 0 )
                        goto LABEL_22;
                      v48 = result;
                    }
                    else
                    {
                      v48 = result;
                      v32 = v49;
                    }
                    sub_208CCA0(a1: v30, a2: v31, a3: v32);
                    result = v48;
LABEL_22:
                    if ( *(int *)(v10 + 16) <= 0 )
                    {
                      v48 = result;
                      sub_277F280();
                      return v48;
                    }
                    return result;
                  }
                  v54 = (char *)(int)v25;
                  v53 = v25;
                }
                else
                {
                  v54 = (char *)(int)v25;
                  v53 = v25;
                }
              }
              else
              {
                v28 = v22;
                v29 = __sync_val_compare_and_swap((volatile signed __int64 *)(v9 + 8 * v26 + 16), 0, v27);
                v54 = (char *)(int)v25;
                v53 = v25;
                if ( v29 == 0 )
                  goto LABEL_18;
              }
            }
          }
          else
          {
            v54 = (char *)(int)v25;
            v53 = v25;
            v28 = v22;
          }
        }
        else
        {
          v54 = nullptr;
          v53 = 0;
          v28 = v22;
        }
        sub_208CC20(a1: v28, a2: v23, a3: v28);
        goto LABEL_18;
      }
      goto LABEL_54;
    }
    if ( *(int *)(v10 + 16) <= 0 )
    {
      v50 = result;
      sub_277F280();
      return v50;
    }
  }
  return result;
}
