// sub_18502F8C0
// rva 0x0502f8c0  size 1022  section .text  group text
// window base 0x18502f8c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18502F8C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // r15
  signed __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 result; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rcx
  int v16; // ebx
  __int64 v17; // r8
  __int64 v18; // rbx
  __int64 v19; // rcx
  _BOOL8 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rsi
  __int64 v23; // rdi
  void (__fastcall *v24)(__int64, __int64, __int64, __int64, __int64); // rax
  __int64 v25; // rdx
  __int64 v26; // rbx
  __int64 v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rdx
  int v32; // eax
  __int64 v33; // r8
  __int64 v34; // rcx
  __int64 v35; // rdx
  int v36; // r8d
  __int64 v37; // rax
  __int64 v38; // rdi
  __int64 v39; // rsi
  __int64 v40; // rdx
  __int64 v41; // rdx
  __int64 v42; // rbp
  int v43; // ebx
  int v44; // [rsp+0h] [rbp-48h] BYREF
  __int64 v45; // [rsp+10h] [rbp-38h]
  __int64 v46; // [rsp+18h] [rbp-30h]
  unsigned int v47; // [rsp+24h] [rbp-24h]
  __int64 v48; // [rsp+28h] [rbp-20h]
  __int64 v49; // [rsp+30h] [rbp-18h]
  BOOL v50; // [rsp+38h] [rbp-10h]
  int v51; // [rsp+3Ch] [rbp-Ch]
  __int64 v52; // [rsp+40h] [rbp-8h]

  v49 = a3;
  if ( (unsigned __int64)&v44 <= *(_QWORD *)(v9 + 8) )
  {
    MEMORY[0x181EB84E0]();
    goto LABEL_57;
  }
  *(_BYTE *)(a3 + 100) = 1;
  __faststorefence();
  sub_18502FCC0();
  result = *(unsigned int *)(v9 + 72);
  if ( (_DWORD)result == 0
    || ((_DWORD)(v27 = *(unsigned int *)(v8 + 8 * result + 72)) == 0
      ? (result = v8 + 8 * result, v28 = result)
      : (v28 = v8 + 8 * v27),
        v28 != v49) )
  {
    v13 = v49;
    v14 = *(unsigned int *)(v49 + 28);
    v15 = v8 + 8 * v14;
    v48 = v15;
    if ( (_DWORD)v14 != 0 )
    {
      v16 = *(_DWORD *)(v8 + 8LL * (*(_DWORD *)(v8 + 8 * v14) >> 3) + 48);
      if ( v16 != 0 )
      {
        v11 = *(unsigned int *)(v15 + v16);
        if ( (_DWORD)v11 != 0 && v9 != *(_QWORD *)(v8 + 376351704) )
        {
          v10 = *(_QWORD *)(v9 + 64);
          v17 = *(_QWORD *)(v8 + 8 * v11 + 16);
          if ( v17 != 0 )
          {
            if ( v17 == v10 )
            {
              v32 = *(_DWORD *)(v8 + 8 * v11 + 28) + 1;
              if ( v32 >= 0 )
              {
                *(_DWORD *)(v8 + 8 * v11 + 28) = v32;
                v52 = v16;
                v51 = v16;
LABEL_10:
                v18 = *(unsigned int *)(v13 + 36);
                v47 = v18;
                if ( (_DWORD)v18 != 0 )
                {
                  v19 = *(_DWORD *)(v8 + 8 * v18) >> 3;
                  v20 = (unsigned __int16)*(_DWORD *)(v8
                                                    + 8LL * *(unsigned int *)(v8 + 8 * v19 + 20)
                                                    + 4LL
                                                    * (*(_DWORD *)(v8 + 8 * v19 + 44)
                                                     & (0x13F0u >> HIBYTE(*(_DWORD *)(v8 + 8 * v19 + 44))))
                                                    + 12) == 5104;
                }
                else
                {
                  v20 = false;
                }
                v50 = v20;
                if ( (_DWORD)v18 == 0 )
                {
                  v46 = v8 + 8 * v18;
LABEL_15:
                  if ( v51 != 0 )
                  {
                    v20 = v48;
                    v25 = *(unsigned int *)(v48 + v52);
                    result = *(unsigned int *)(v8 + 8 * v25 + 28);
                    if ( (_DWORD)result == 1 )
                    {
                      *(_QWORD *)(v8 + 8 * v25 + 16) = 0;
                      __faststorefence();
                    }
                    else
                    {
                      *(_DWORD *)(v8 + 8 * v25 + 28) = result - 1;
                    }
                    if ( (_DWORD)result != 1 )
                    {
                      v26 = v47;
LABEL_20:
                      if ( (_DWORD)v26 == 0 )
                        goto LABEL_21;
                      if ( v50 )
                      {
                        v29 = *(_DWORD *)(v8 + 8 * v26) >> 3;
                        result = ((__int64 (__fastcall *)(signed __int64, __int64, __int64))(v7
                                                                                           + *(_QWORD *)(v8 + 8 * v29 + HIWORD(*(_DWORD *)(v8 + 8LL * *(unsigned int *)(v8 + 8 * v29 + 20) + 4LL * (*(_DWORD *)(v8 + 8 * v29 + 44) & (0x13F0u >> HIBYTE(*(_DWORD *)(v8 + 8 * v29 + 44)))) + 12)) + 8)))(
                                   a1: v10,
                                   a2: v11,
                                   a3: v46);
                        goto LABEL_21;
                      }
                      v37 = MEMORY[0x182770780]();
LABEL_61:
                      v45 = v37;
                      v34 = v48;
                      while ( 1 )
                      {
                        MEMORY[0x18208CCA0](a1: v38, a2: v39, a3: v34);
                        v37 = v45;
                        v34 = v48;
                        while ( 1 )
                        {
LABEL_51:
                          v37 = MEMORY[0x182769900](a1: v38, a2: v39, a3: v37, a4: v34, a5: &a7);
LABEL_52:
                          v40 = *(unsigned int *)(v8 + 8 * v35 + 4);
                          if ( (_DWORD)v40 != 0 )
                          {
                            v41 = *(unsigned int *)(v8 + 8 * v40 + 8);
                            if ( (_DWORD)v41 != 0 && *(_DWORD *)(v8 + 8 * v41 + 16) != 0 )
                              break;
                          }
                        }
                        v45 = v37;
                      }
                    }
                    v30 = *(unsigned int *)(v8 + 8 * v25 + 4);
                    if ( (_DWORD)v30 == 0 )
                    {
                      v26 = v47;
                      goto LABEL_20;
                    }
                    v31 = *(unsigned int *)(v8 + 8 * v30 + 8);
                    if ( (_DWORD)v31 == 0 )
                    {
                      v26 = v47;
                      goto LABEL_20;
                    }
                    result = *(unsigned int *)(v8 + 8 * v31 + 16);
                    if ( (_DWORD)result == 0 )
                    {
                      v26 = v47;
                      goto LABEL_20;
                    }
                    v33 = 1;
                  }
                  else
                  {
                    v33 = 0xFFFFFFFFLL;
                  }
                  result = MEMORY[0x18208CCA0](a1: v10, a2: v11, a3: v48, a4: v20, a5: v33);
                  v26 = v47;
                  goto LABEL_20;
                }
                if ( v20 )
                {
                  v21 = *(_DWORD *)(v8 + 8 * v18) >> 3;
                  v22 = *(unsigned int *)(v8 + 8 * v21 + 44);
                  v23 = (unsigned int)v22 & (0x13F0u >> HIBYTE(*(_DWORD *)(v8 + 8 * v21 + 44)));
                  v24 = (void (__fastcall *)(__int64, __int64, __int64, __int64, __int64))(v7
                                                                                         + *(_QWORD *)(v8 + 8 * v21 + HIWORD(*(_DWORD *)(v8 + 8LL * *(unsigned int *)(v8 + 8 * v21 + 20) + 4 * v23 + 12))));
                  v46 = v8 + 8 * v18;
                  v24(a1: v23, a2: v22, a3: v46, a4: v13, a5: v13);
                  goto LABEL_15;
                }
                v46 = v8 + 8 * v18;
                v42 = v52;
                v43 = v51;
                v37 = MEMORY[0x18276B120]();
                if ( v43 == 0 )
                  goto LABEL_61;
                v34 = v48;
                v35 = *(unsigned int *)(v48 + v42);
                v36 = *(_DWORD *)(v8 + 8 * v35 + 28);
                if ( v36 == 1 )
                {
                  *(_QWORD *)(v8 + 8 * v35 + 16) = 0;
                  __faststorefence();
                  goto LABEL_50;
                }
LABEL_58:
                *(_DWORD *)(v8 + 8 * v35 + 28) = v36 - 1;
LABEL_50:
                if ( v36 == 1 )
                  goto LABEL_52;
                goto LABEL_51;
              }
            }
          }
          else if ( __sync_val_compare_and_swap((volatile signed __int64 *)(v8 + 8 * v11 + 16), 0, v10) == 0 )
          {
            v52 = v16;
            v51 = v16;
            goto LABEL_10;
          }
        }
      }
      v52 = v16;
      v51 = v16;
      MEMORY[0x18208CC20](a1: v10, a2: v11, a3: v15);
      v13 = v49;
      goto LABEL_10;
    }
LABEL_57:
    v37 = MEMORY[0x182771080]();
    goto LABEL_58;
  }
LABEL_21:
  if ( *(int *)(v9 + 16) <= 0 )
    return MEMORY[0x18277F280]();
  return result;
}
