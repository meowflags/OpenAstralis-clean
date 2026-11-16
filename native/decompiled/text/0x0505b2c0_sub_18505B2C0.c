// sub_18505B2C0
// rva 0x0505b2c0  size 1146  section .text  group text
// window base 0x18505b2c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18505B2C0(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        int a9,
        __int64 a10,
        __int64 a11)
{
  __int64 v11; // r13
  _DWORD *v12; // r14
  __int64 v13; // r15
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rsi
  int v18; // r8d
  int v19; // r9d
  __int64 v20; // rdx
  __int64 v21; // rax
  _DWORD *v22; // rcx
  _DWORD *v23; // rax
  __int64 v24; // rdi
  __int64 v25; // rsi
  __int64 v26; // rcx
  __int64 v27; // rdi
  __int64 v28; // rsi
  __int64 v29; // rdi
  __int64 v30; // rsi
  __int64 v31; // rax
  __int64 v32; // rdi
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rsi
  _DWORD *v37; // rax
  __int64 v38; // rdi
  __int64 v39; // rsi
  __int64 v40; // rdx
  __int64 (__fastcall *v41)(__int64, __int64, _DWORD *, _QWORD, _DWORD *); // rcx
  _DWORD *v42; // rax
  __int64 v43; // rdi
  __int64 v44; // rsi
  __int64 v45; // rdx
  __int64 (__fastcall *v46)(__int64, __int64, _DWORD *, _QWORD, _DWORD *); // rcx
  _DWORD *v47; // rax
  __int64 v48; // rdi
  __int64 v49; // rsi
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rdi
  __int64 v53; // rsi
  __int64 v55; // [rsp+0h] [rbp-38h] BYREF
  __int64 v56; // [rsp+8h] [rbp-30h]
  _DWORD *v57; // [rsp+10h] [rbp-28h]
  __int64 v58; // [rsp+18h] [rbp-20h]
  _DWORD *v59; // [rsp+20h] [rbp-18h]
  __int64 v60; // [rsp+28h] [rbp-10h]
  _DWORD *v61; // [rsp+30h] [rbp-8h]

  if ( (unsigned __int64)&v55 <= *(_QWORD *)(v13 + 8) )
  {
    v61 = a3;
    MEMORY[0x181EB84E0]();
    goto LABEL_26;
  }
  v14 = (unsigned __int16)v12[2 * v12[2 * (*a3 >> 3) + 5]
                            + 3
                            + (v12[2 * (*a3 >> 3) + 11] & (0x1ECEu >> HIBYTE(v12[2 * (*a3 >> 3) + 11])))];
  if ( (_DWORD)v14 != 7886 )
  {
LABEL_26:
    v61 = a3;
    MEMORY[0x182770780]();
  }
  else if ( *a3 >> 3 == 5414848 )
  {
    v61 = a3;
    v15 = MEMORY[0x185F1D280]();
    if ( (_DWORD *)v15 == v12 )
    {
LABEL_28:
      MEMORY[0x182771080]();
      goto LABEL_29;
    }
    v20 = *(unsigned int *)(v15 + 8);
    if ( (_DWORD)v20 == 0 )
    {
LABEL_29:
      MEMORY[0x182771080]();
LABEL_30:
      MEMORY[0x182771080]();
      goto LABEL_31;
    }
    v21 = (unsigned int)v12[2 * v20 + 5];
    v22 = &v12[2 * v21];
    if ( (_DWORD)v21 == 0 )
      return sub_18505B65D(a1: v16, a2: v17, a3: v20, a4: (_DWORD)v22, a5: v18, a6: v19, a7, a8, a9, a10, a11);
    v59 = &v12[2 * v21];
    v23 = (_DWORD *)MEMORY[0x18505E680](a1: v16, a2: v17, a3: v61, a4: v22);
    if ( v23 == v12 )
      goto LABEL_30;
    v26 = (unsigned __int16)v12[2 * v12[2 * (*v23 >> 3) + 5]
                              + 3
                              + (v12[2 * (*v23 >> 3) + 11] & (0x1ED7u >> HIBYTE(v12[2 * (*v23 >> 3) + 11])))];
    if ( (_DWORD)v26 != 7895 )
    {
LABEL_31:
      v23 = (_DWORD *)MEMORY[0x182770780]();
    }
    else if ( *v23 >> 3 == 5414726 )
    {
      v60 = (__int64)v23;
      v60 = MEMORY[0x185F25880](a1: v24, a2: v25, a3: v23);
      v58 = sub_18505B940(a1: v27, a2: v28, a3: v61);
      v31 = MEMORY[0x185F1D280](a1: v29, a2: v30, a3: v61);
      if ( (_DWORD *)v31 == v12 )
      {
LABEL_33:
        MEMORY[0x182771080]();
        goto LABEL_34;
      }
      v33 = *(unsigned int *)(v31 + 12);
      if ( (_DWORD)v33 == 0 )
      {
LABEL_34:
        MEMORY[0x182771080]();
        goto LABEL_35;
      }
      v34 = v12[2 * v33] >> 3;
      if ( (unsigned __int16)v12[2 * v12[2 * v34 + 5] + 3 + (v12[2 * v34 + 11] & (0x2331u >> HIBYTE(v12[2 * v34 + 11])))] != 9009 )
      {
LABEL_35:
        MEMORY[0x182770780]();
        goto LABEL_36;
      }
      v35 = v12[2 * v33] >> 3;
      v36 = v12[2 * v35 + 11] & (0x1716u >> HIBYTE(v12[2 * v35 + 11]));
      v37 = (_DWORD *)((__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v11
                                                                          + *(_QWORD *)((char *)&v12[2 * v35 + 32]
                                                                                      + HIWORD(v12[2
                                                                                                 * (unsigned int)v12[2 * v35 + 5]
                                                                                                 + 3
                                                                                                 + v36]))))(
                        a1: v32,
                        a2: v36,
                        a3: &v12[2 * v33]);
      if ( v37 == v12 )
      {
LABEL_36:
        MEMORY[0x182771080]();
      }
      else if ( (unsigned __int16)v12[2 * v12[2 * (*v37 >> 3) + 5]
                                    + 3
                                    + (v12[2 * (*v37 >> 3) + 11] & (0x1F0Eu >> HIBYTE(v12[2 * (*v37 >> 3) + 11])))] == 7950 )
      {
        v40 = *v37 >> 3;
        v41 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *, _QWORD, _DWORD *))(v11
                                                                                   + *(_QWORD *)((char *)&v12[2 * v40 + 36]
                                                                                               + HIWORD(v12[2 * v12[2 * v40 + 5] + 3 + (v12[2 * v40 + 11] & (0x1F0Eu >> HIBYTE(v12[2 * v40 + 11])))])));
        v42 = (_DWORD *)v41(a1: v38, a2: v39, a3: v37, a4: v41, a5: v12 + 94304032);
        if ( v42 == v12 )
        {
LABEL_38:
          MEMORY[0x182771080]();
        }
        else if ( (unsigned __int16)v12[2 * v12[2 * (*v42 >> 3) + 5]
                                      + 3
                                      + (v12[2 * (*v42 >> 3) + 11] & (0x1F0Eu >> HIBYTE(v12[2 * (*v42 >> 3) + 11])))] == 7950 )
        {
          v45 = *v42 >> 3;
          v46 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *, _QWORD, _DWORD *))(v11
                                                                                     + *(_QWORD *)((char *)&v12[2 * v45 + 76]
                                                                                                 + HIWORD(v12[2 * v12[2 * v45 + 5] + 3 + (v12[2 * v45 + 11] & (0x1F0Eu >> HIBYTE(v12[2 * v45 + 11])))])));
          v47 = (_DWORD *)v46(a1: v43, a2: v44, a3: v42, a4: v46, a5: v12 + 94304036);
          if ( v47 != v12
            && (unsigned __int16)v12[2 * v12[2 * (*v47 >> 3) + 5]
                                   + 3
                                   + (v12[2 * (*v47 >> 3) + 11] & (0x1A9Au >> HIBYTE(v12[2 * (*v47 >> 3) + 11])))] != 6810 )
          {
            goto LABEL_40;
          }
          v50 = *(_QWORD *)(v13 + 40);
          if ( (unsigned __int64)(v50 + 32) > *(_QWORD *)(v13 + 32) )
          {
            v57 = v47;
            v50 = MEMORY[0x181EAA920](a1: v48, a2: v49, a3: 43286168);
            v47 = v57;
          }
          else
          {
            *(_QWORD *)(v13 + 40) = v50 + 32;
            *(_DWORD *)v50 = 43286168;
            *(_DWORD *)(v50 + 4) = 0;
            *(_QWORD *)(v50 + 8) = 0;
            *(_QWORD *)(v50 + 16) = 0;
            *(_QWORD *)(v50 + 24) = 0;
          }
          v57 = v47;
          v56 = v50;
          MEMORY[0x185061EA0](a1: v58, a2: v47, a3: v50, a4: v50, a5: v59, a6: v60);
          if ( *(int *)(v13 + 16) <= 0 )
            MEMORY[0x18277F280](a1: v52, a2: v53, a3: v60, a4: v51, a5: v59);
          return v56;
        }
        v47 = (_DWORD *)MEMORY[0x182770780]();
LABEL_40:
        MEMORY[0x18276FC00](a1: v48, a2: v49, a3: v47, a4: v61, a5: v12 + 10821514);
        __builtin_debugtrap();
        __builtin_debugtrap();
        __builtin_debugtrap();
        __builtin_debugtrap();
        __builtin_debugtrap();
        __builtin_debugtrap();
        return sub_18505B740();
      }
      MEMORY[0x182770780]();
      goto LABEL_38;
    }
    MEMORY[0x18276FC00](a1: v24, a2: v25, a3: v23, a4: v26, a5: v12 + 10829066);
    goto LABEL_33;
  }
  v61 = a3;
  MEMORY[0x18276FC00](a1, a2, a3, a4: v14, a5: v12 + 10829780);
  goto LABEL_28;
}
