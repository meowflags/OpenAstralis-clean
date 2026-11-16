// sub_15AB380
// rva 0x015ab380  size 902  section .text  group text
// window base 0x1815ab380: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_15AB380(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbx
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v22; // rdx
  __int64 v23; // r8
  int v24; // r9d
  unsigned int v25; // ebx
  __int64 v26; // rdx
  __int64 v27; // r8
  int v28; // r9d
  __int64 v29; // [rsp+0h] [rbp-58h] BYREF
  __int64 v30; // [rsp+10h] [rbp-48h]
  __int64 v31; // [rsp+18h] [rbp-40h]
  __int64 v32; // [rsp+20h] [rbp-38h]
  __int64 v33; // [rsp+28h] [rbp-30h]
  __int64 v34; // [rsp+30h] [rbp-28h]
  __int64 v35; // [rsp+38h] [rbp-20h]
  __int64 v36; // [rsp+40h] [rbp-18h]
  __int64 v37; // [rsp+48h] [rbp-10h]
  __int64 v38; // [rsp+50h] [rbp-8h]

  v38 = a1;
  v37 = a2;
  v36 = a4;
  if ( (unsigned __int64)&v29 <= *(_QWORD *)(v8 + 8) )
  {
    v35 = a6;
    v34 = a5;
    v33 = a3;
    sub_1EB84E0();
    goto LABEL_47;
  }
  v35 = a6;
  v34 = a5;
  v6 = a3;
  v33 = a3;
  v32 = v7 + 376351776;
  v31 = sub_1EF1B80(a1, a2, a3: v7 + 376351776, a4, a5: a3, a6: 0);
  v30 = sub_1EF1B80(a1: v10, a2: v11, a3: v32, a4: v9, a5: v34, a6: 0);
  v15 = sub_1EF1B80(a1: v13, a2: v14, a3: v32, a4: v12, a5: v35, a6: 0);
  if ( v31 == v7 )
  {
    v18 = v30;
    v31 = v15;
    if ( v30 == v7 )
    {
      v17 = v37;
      if ( v37 != v7 && v37 != v38 )
      {
        v16 = v38;
        if ( v38 == v7 )
        {
          v18 = v37;
        }
        else
        {
          if ( *(_BYTE *)(v37 + 12) == *(_BYTE *)(v38 + 12) )
          {
            v22 = *(unsigned int *)(v38 + 4);
            if ( (_DWORD)v22 != 0 )
            {
              v23 = *(unsigned int *)(v37 + 4);
              if ( (_DWORD)v23 == 0 )
              {
LABEL_49:
                sub_2771080();
                goto LABEL_50;
              }
              v24 = *(_DWORD *)(v7 + 8 * v22 + 8);
              v25 = *(_DWORD *)(v7 + 8 * v23 + 8);
              if ( v25 == v24 )
              {
                if ( v24 != 0 )
                {
                  if ( (unsigned int)sub_282F960(
                                       a1: 12,
                                       a2: v25,
                                       a3: v7 + 8 * v22,
                                       a4: v30,
                                       a5: 12,
                                       a6: v7 + 8 * v23) != 0 )
                    v18 = v30;
                  else
                    v18 = v37;
                  v15 = v31;
                }
              }
              else
              {
                v18 = v37;
              }
              goto LABEL_10;
            }
LABEL_47:
            sub_2771080();
LABEL_48:
            v32 = v18;
            sub_2771080();
            goto LABEL_49;
          }
          v18 = v37;
        }
      }
    }
LABEL_10:
    if ( v15 != v7 )
    {
      v6 = v15;
      v19 = v38;
      goto LABEL_4;
    }
    v6 = v36;
    if ( v36 == v7 )
    {
      v6 = v15;
      v19 = v38;
      goto LABEL_4;
    }
    if ( v36 == v38 )
    {
      v6 = v15;
      v19 = v38;
      goto LABEL_4;
    }
    v16 = v38;
    if ( v38 == v7 )
    {
      v19 = v38;
      goto LABEL_4;
    }
    if ( *(_BYTE *)(v36 + 12) != *(_BYTE *)(v38 + 12) )
    {
      v19 = v38;
      goto LABEL_4;
    }
    v26 = *(unsigned int *)(v38 + 4);
    if ( (_DWORD)v26 != 0 )
    {
      v27 = *(unsigned int *)(v36 + 4);
      if ( (_DWORD)v27 != 0 )
      {
        v28 = *(_DWORD *)(v7 + 8 * v26 + 8);
        v17 = *(unsigned int *)(v7 + 8 * v27 + 8);
        if ( (_DWORD)v17 == v28 )
        {
          if ( v28 != 0 )
          {
            v32 = v18;
            if ( (unsigned int)sub_282F960(a1: 12, a2: v17, a3: v7 + 8 * v26, a4: v18, a5: 12, a6: v7 + 8 * v27) != 0 )
              v6 = v31;
            else
              v6 = v36;
            v18 = v32;
            v19 = v38;
          }
          else
          {
            v6 = v15;
            v19 = v38;
          }
        }
        else
        {
          v19 = v38;
        }
        goto LABEL_4;
      }
LABEL_50:
      sub_2771080(a1: v16, a2: v37, a3: v33, a4: v6, a5: v34, a6: v35);
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      return sub_15AB720();
    }
    goto LABEL_48;
  }
  v6 = v15;
  v18 = v30;
  v19 = v31;
LABEL_4:
  v20 = *(_QWORD *)(v8 + 40);
  if ( (unsigned __int64)(v20 + 24) > *(_QWORD *)(v8 + 32) )
  {
    v30 = v6;
    v32 = v18;
    v31 = v19;
    v20 = sub_1EAA920(a1: v16, a2: v17, a3: 35802552);
    v6 = v30;
    v18 = v32;
    v19 = v31;
  }
  else
  {
    *(_QWORD *)(v8 + 40) = v20 + 24;
    *(_DWORD *)v20 = 35802552;
    *(_DWORD *)(v20 + 4) = 0;
    *(_QWORD *)(v20 + 8) = 0;
    *(_QWORD *)(v20 + 16) = 0;
  }
  *(_DWORD *)(v20 + 12) = (unsigned __int64)(v6 - v7) >> 3;
  *(_DWORD *)(v20 + 8) = (unsigned __int64)(v18 - v7) >> 3;
  *(_DWORD *)(v20 + 4) = (unsigned __int64)(v19 - v7) >> 3;
  if ( *(int *)(v8 + 16) <= 0 )
    sub_277F280();
  return v20;
}
