// sub_185044E60
// rva 0x05044e60  size 688  section .text  group text
// window base 0x185044e60: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_185044E60(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // r15
  signed __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rcx
  int v15; // ebx
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // rax
  int v19; // ebx
  __int64 v21; // rax
  __int64 v22; // rax
  int v23; // eax
  __int64 v24; // r8
  __int64 v25; // rcx
  __int64 v26; // rdi
  __int64 v27; // rsi
  __int64 v28; // rbp
  int v29; // ebx
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rdi
  __int64 v33; // rsi
  __int64 v34; // rdx
  int v35; // ebx
  __int64 v36; // rdx
  __int64 v37; // rdx
  __int64 v38; // r8
  int v39; // [rsp+0h] [rbp-48h] BYREF
  __int64 v40; // [rsp+8h] [rbp-40h]
  __int64 v41; // [rsp+10h] [rbp-38h]
  __int64 v42; // [rsp+18h] [rbp-30h]
  __int64 v43; // [rsp+20h] [rbp-28h]
  int v44; // [rsp+2Ch] [rbp-1Ch]
  __int64 v45; // [rsp+30h] [rbp-18h]
  unsigned int v46; // [rsp+3Ch] [rbp-Ch]
  __int64 v47; // [rsp+40h] [rbp-8h]

  v43 = a3;
  if ( (unsigned __int64)&v39 <= *(_QWORD *)(v9 + 8) )
  {
    MEMORY[0x181EB84E0]();
    goto LABEL_34;
  }
  if ( *(_BYTE *)(a3 + 100) != 0 )
  {
    v46 = *(unsigned __int8 *)(a3 + 100);
    MEMORY[0x18635F240]();
    v12 = v43;
    v13 = *(unsigned int *)(v43 + 28);
    v14 = v8 + 8 * v13;
    v42 = v14;
    if ( (_DWORD)v13 != 0 )
    {
      v15 = *(_DWORD *)(v8 + 8LL * (*(_DWORD *)(v8 + 8 * v13) >> 3) + 48);
      if ( v15 != 0 )
      {
        v11 = *(unsigned int *)(v14 + v15);
        if ( (_DWORD)v11 != 0 && v9 != *(_QWORD *)(v8 + 376351704) )
        {
          v10 = *(_QWORD *)(v9 + 64);
          v16 = *(_QWORD *)(v8 + 8 * v11 + 16);
          if ( v16 != 0 )
          {
            if ( v16 == v10 )
            {
              v23 = *(_DWORD *)(v8 + 8 * v11 + 28) + 1;
              if ( v23 >= 0 )
              {
                *(_DWORD *)(v8 + 8 * v11 + 28) = v23;
                v45 = v15;
                v44 = v15;
LABEL_10:
                *(_BYTE *)(v12 + 100) = 0;
                __faststorefence();
                v17 = *(unsigned int *)(v12 + 116);
                if ( (_DWORD)v17 != 0 )
                {
                  if ( *(_BYTE *)(v8 + 8 * v17 + 100) != 0 )
                  {
                    *(_BYTE *)(v8 + 8 * v17 + 100) = 0;
                    __faststorefence();
                  }
                  if ( v44 != 0 )
                  {
                    v14 = v42;
                    v18 = *(unsigned int *)(v42 + v45);
                    v19 = *(_DWORD *)(v8 + 8 * v18 + 28);
                    if ( v19 == 1 )
                    {
                      *(_QWORD *)(v8 + 8 * v18 + 16) = 0;
                      __faststorefence();
                    }
                    else
                    {
                      *(_DWORD *)(v8 + 8 * v18 + 28) = v19 - 1;
                    }
                    if ( v19 != 1 )
                      goto LABEL_17;
                    v21 = *(unsigned int *)(v8 + 8 * v18 + 4);
                    if ( (_DWORD)v21 == 0 )
                      goto LABEL_17;
                    v22 = *(unsigned int *)(v8 + 8 * v21 + 8);
                    if ( (_DWORD)v22 == 0 || *(_DWORD *)(v8 + 8 * v22 + 16) == 0 )
                      goto LABEL_17;
                    v24 = 1;
                  }
                  else
                  {
                    v24 = 0xFFFFFFFFLL;
                  }
                  MEMORY[0x18208CCA0](a1: v10, a2: v11, a3: v42, a4: v14, a5: v24);
LABEL_17:
                  MEMORY[0x186360580]();
                  goto LABEL_18;
                }
                while ( 1 )
                {
                  v28 = v45;
                  v29 = v44;
                  v30 = MEMORY[0x18276BEE0]();
                  if ( v29 != 0 )
                  {
                    v31 = v42;
                    v34 = *(unsigned int *)(v42 + v28);
                    v35 = *(_DWORD *)(v8 + 8 * v34 + 28);
                    if ( v35 == 1 )
                    {
                      *(_QWORD *)(v8 + 8 * v34 + 16) = 0;
                      __faststorefence();
                    }
                    else
                    {
                      *(_DWORD *)(v8 + 8 * v34 + 28) = v35 - 1;
                    }
                    if ( v35 != 1 )
                    {
                      v41 = v30;
                      goto LABEL_35;
                    }
                    v36 = *(unsigned int *)(v8 + 8 * v34 + 4);
                    if ( (_DWORD)v36 == 0 )
                    {
                      v41 = v30;
                      goto LABEL_35;
                    }
                    v37 = *(unsigned int *)(v8 + 8 * v36 + 8);
                    if ( (_DWORD)v37 == 0 )
                    {
                      v41 = v30;
                      goto LABEL_35;
                    }
                    if ( *(_DWORD *)(v8 + 8 * v37 + 16) == 0 )
                    {
                      v41 = v30;
                      goto LABEL_35;
                    }
                    v38 = 1;
                  }
                  else
                  {
                    v38 = 0xFFFFFFFFLL;
                  }
                  v40 = v30;
                  MEMORY[0x18208CCA0](a1: v32, a2: v33, a3: v42, a4: v31, a5: v38);
                  v47 = v7;
                  v41 = v40;
LABEL_35:
                  MEMORY[0x186360580]();
                  MEMORY[0x182769900](a1: v26, a2: v27, a3: v41, a4: v25, a5: &a7);
                }
              }
            }
          }
          else if ( __sync_val_compare_and_swap((volatile signed __int64 *)(v8 + 8 * v11 + 16), 0, v10) == 0 )
          {
            v45 = v15;
            v44 = v15;
            goto LABEL_10;
          }
        }
      }
      v45 = v15;
      v44 = v15;
      MEMORY[0x18208CC20](a1: v10, a2: v11, a3: v14);
      v12 = v43;
      goto LABEL_10;
    }
LABEL_34:
    v41 = MEMORY[0x18276BEE0]();
    goto LABEL_35;
  }
  v46 = *(unsigned __int8 *)(a3 + 100);
LABEL_18:
  if ( *(int *)(v9 + 16) <= 0 )
    MEMORY[0x18277F280]();
  return v46;
}
