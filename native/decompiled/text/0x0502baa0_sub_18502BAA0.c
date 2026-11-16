// sub_18502BAA0
// rva 0x0502baa0  size 934  section .text  group text
// window base 0x18502baa0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
unsigned __int64 __fastcall sub_18502BAA0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  __int64 v13; // rdx
  signed __int64 v14; // rbx
  __int64 v15; // rbp
  __int64 v16; // rdx
  __int64 v17; // rax
  int v18; // r8d
  __int64 v19; // rdx
  _DWORD *v20; // rcx
  _DWORD *v21; // rdx
  __int64 v22; // rax
  int v23; // r8d
  unsigned __int64 v24; // rdx
  int v25; // eax
  __int64 v26; // r8
  __int64 v27; // rdx
  int v28; // r8d
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rdi
  __int64 v32; // rsi
  __int64 v33; // rdx
  __int64 v34; // rdx
  int v35; // [rsp+0h] [rbp-18h] BYREF
  unsigned __int64 v36; // [rsp+8h] [rbp-10h]
  __int64 v37; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v35 <= *(_QWORD *)(v9 + 8) )
  {
    v29 = MEMORY[0x181EB84E0]();
    goto LABEL_47;
  }
  v10 = *(unsigned int *)(v8 + 374343880);
  v11 = v8 + 8 * v10;
  if ( (_DWORD)v10 == 0 )
  {
    v13 = *(unsigned int *)(v8 + 377212508);
    if ( (_DWORD)v13 != 0 && v9 != *(_QWORD *)(v8 + 376351704) )
    {
      v14 = *(_QWORD *)(v9 + 64);
      v15 = *(_QWORD *)(v8 + 8 * v13 + 16);
      if ( v15 != 0 )
      {
        if ( v15 == v14 )
        {
          v25 = *(_DWORD *)(v8 + 8 * v13 + 28) + 1;
          if ( v25 >= 0 )
          {
            *(_DWORD *)(v8 + 8 * v13 + 28) = v25;
LABEL_10:
            v16 = *(unsigned int *)(v8 + 374343880);
            v17 = v8 + 8 * v16;
            if ( (_DWORD)v16 != 0 )
            {
LABEL_11:
              a3 = *(unsigned int *)(v8 + 377212508);
              v18 = *(_DWORD *)(v8 + 8 * a3 + 28);
              if ( v18 == 1 )
              {
                *(_QWORD *)(v8 + 8 * a3 + 16) = 0;
                __faststorefence();
              }
              else
              {
                v11 = (unsigned int)(v18 - 1);
                *(_DWORD *)(v8 + 8 * a3 + 28) = v11;
              }
              if ( v18 == 1 )
              {
                a3 = *(unsigned int *)(v8 + 8 * a3 + 4);
                if ( (_DWORD)a3 != 0 )
                {
                  a3 = *(unsigned int *)(v8 + 8 * a3 + 8);
                  if ( (_DWORD)a3 != 0 )
                  {
                    if ( *(_DWORD *)(v8 + 8 * a3 + 16) != 0 )
                    {
                      v36 = v17;
                      MEMORY[0x18208CCA0](a1, a2, a3: v8 + 377212392, a4: v11, a5: 1);
                      v11 = v36;
                    }
                    else
                    {
                      v11 = v17;
                    }
                  }
                  else
                  {
                    v11 = v17;
                  }
                }
                else
                {
                  v11 = v17;
                }
              }
              else
              {
                v11 = v17;
              }
              goto LABEL_3;
            }
            v19 = *(unsigned int *)(v8 + 374382612);
            v20 = (_DWORD *)(v8 + 8 * v19);
            if ( (_DWORD)v19 != 0 )
            {
              v21 = (_DWORD *)(v8 + 8 * v19);
              v36 = v17;
            }
            else
            {
              v37 = v8 + 8 * v19;
              v36 = v17;
              MEMORY[0x18518A800](a1, a2, a3: v8 + 377212520, a4: v20, a5: v8 + 43271240);
              v20 = (_DWORD *)(v8 + 8LL * *(unsigned int *)(v8 + 374382612));
              v21 = v20;
            }
            if ( v21 == (_DWORD *)v8 )
            {
              v29 = MEMORY[0x18276BEE0](a1, a2, a3: v21, a4: v20);
            }
            else
            {
              if ( (unsigned __int16)*(_DWORD *)(v8
                                               + 8LL * *(unsigned int *)(v8 + 8LL * (*v21 >> 3) + 20)
                                               + 4LL
                                               * (*(_DWORD *)(v8 + 8LL * (*v21 >> 3) + 44)
                                                & (0x7BDu >> HIBYTE(*(_DWORD *)(v8 + 8LL * (*v21 >> 3) + 44))))
                                               + 12) == 1981 )
              {
                v22 = *v21 >> 3;
                v17 = ((__int64 (*)(void))(v7
                                         + *(_QWORD *)(v8
                                                     + 8 * v22
                                                     + HIWORD(*(_DWORD *)(v8
                                                                        + 8LL * *(unsigned int *)(v8 + 8 * v22 + 20)
                                                                        + 4LL
                                                                        * (*(_DWORD *)(v8 + 8 * v22 + 44)
                                                                         & (0x7BDu >> HIBYTE(*(_DWORD *)(v8 + 8 * v22 + 44))))
                                                                        + 12)))))();
                *(_DWORD *)(v8 + 374343880) = (unsigned __int64)(v17 - v8) >> 3;
                __faststorefence();
                v23 = *(_DWORD *)(v8 + 374343744);
                if ( (v23 & 2) != 0 )
                {
                  if ( (v23 & 1) != 0 )
                  {
                    v26 = v8 + 374343744 - *(_QWORD *)(v8 + 374343736);
                    v11 = 0;
                    if ( *(_BYTE *)(v26 + 48) != 0 )
                      *(_BYTE *)(v26 + 48) = 0;
                  }
                  else
                  {
                    v24 = (v8 + 374343744) & 0xFFFFFFFFFFF80000LL;
                    v11 = (v8 + 374343744 - (v24 + 2112)) >> 9;
                    if ( *(_BYTE *)(v24 + v11 + 56) != 0 )
                      *(_BYTE *)(v24 + v11 + 56) = 0;
                  }
                }
                goto LABEL_11;
              }
              v29 = MEMORY[0x18276B120]();
            }
            v27 = *(unsigned int *)(v8 + 377212508);
            v28 = *(_DWORD *)(v8 + 8 * v27 + 28);
            if ( v28 == 1 )
            {
              *(_QWORD *)(v8 + 8 * v27 + 16) = 0;
              __faststorefence();
            }
            else
            {
              v30 = (unsigned int)(v28 - 1);
              *(_DWORD *)(v8 + 8 * v27 + 28) = v30;
            }
            if ( v28 == 1 )
              goto LABEL_43;
            while ( 1 )
            {
              v29 = MEMORY[0x182769900](a1: v31, a2: v32, a3: v29, a4: v30, a5: &a7);
LABEL_43:
              v33 = *(unsigned int *)(v8 + 8 * v27 + 4);
              if ( (_DWORD)v33 != 0 )
              {
                v34 = *(unsigned int *)(v8 + 8 * v33 + 8);
                if ( (_DWORD)v34 != 0 )
                {
LABEL_47:
                  if ( *(_DWORD *)(v8 + 8 * v34 + 16) != 0 )
                  {
                    v37 = v29;
                    MEMORY[0x18208CCA0](a1: v31, a2: v32, a3: v8 + 377212392, a4: v30, a5: 1);
                    v29 = v37;
                  }
                }
              }
            }
          }
        }
      }
      else if ( __sync_val_compare_and_swap((volatile signed __int64 *)(v8 + 8 * v13 + 16), 0, v14) == 0 )
      {
        goto LABEL_10;
      }
    }
    v37 = v11;
    MEMORY[0x18208CC20](a1, a2, a3: v8 + 377212392);
    goto LABEL_10;
  }
LABEL_3:
  if ( *(int *)(v9 + 16) <= 0 )
    MEMORY[0x18277F280](a1, a2, a3, a4: v11);
  return v11;
}
