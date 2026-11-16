// sub_4F30440
// rva 0x04f30440  size 1097  section .text  group text
// window base 0x184f30440: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F30440(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5)
{
  __int64 v5; // r13
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rsi
  _DWORD *v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rsi
  _DWORD *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rsi
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rdi
  __int64 v22; // rsi
  _DWORD *v23; // rax
  __int64 v24; // rdx
  _DWORD *v25; // r8
  __int64 result; // rax
  __int64 v27; // rdx
  __int64 v28; // rax
  unsigned __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rdi
  __int64 v32; // rsi
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // rax
  unsigned __int64 v37; // rbx
  __int64 v38; // [rsp+0h] [rbp-48h] BYREF
  __int64 v39; // [rsp+10h] [rbp-38h]
  __int64 v40; // [rsp+18h] [rbp-30h]
  __int64 v41; // [rsp+20h] [rbp-28h]
  _DWORD *v42; // [rsp+28h] [rbp-20h]
  __int64 v43; // [rsp+30h] [rbp-18h]
  __int64 v44; // [rsp+38h] [rbp-10h]
  _DWORD *v45; // [rsp+40h] [rbp-8h]

  if ( (unsigned __int64)&v38 <= *(_QWORD *)(v7 + 8) )
  {
    v45 = a5;
    v44 = a3;
    sub_1EB84E0();
LABEL_42:
    sub_2771080();
    goto LABEL_43;
  }
  if ( a5 == v6 )
  {
    v23 = v6;
    v45 = a5;
    v44 = a3;
  }
  else
  {
    v8 = *(_QWORD *)(v7 + 40);
    if ( (unsigned __int64)(v8 + 32) > *(_QWORD *)(v7 + 32) )
    {
      v45 = a5;
      v44 = a3;
      v8 = sub_1EAA920(a1, a2, a3: 34098720);
      a5 = v45;
    }
    else
    {
      *(_QWORD *)(v7 + 40) = v8 + 32;
      *(_DWORD *)v8 = 34098720;
      *(_DWORD *)(v8 + 4) = 0;
      *(_QWORD *)(v8 + 8) = 0;
      *(_QWORD *)(v8 + 16) = 0;
      *(_QWORD *)(v8 + 24) = 0;
      v44 = a3;
    }
    v45 = a5;
    v43 = v8;
    sub_4EC23E0(a1, a2, a3: v8);
    if ( (unsigned int)sub_4F30BC0(a1: v10, a2: v11, a3: v6 + 94149304, a4: v9, a5: v43) != 0 )
    {
      v12 = (_DWORD *)sub_4EC6C20(a1, a2, a3: v43);
      if ( v12 == v6 )
      {
LABEL_43:
        sub_2771080();
        goto LABEL_44;
      }
      if ( (unsigned __int16)v6[2 * v6[2 * (*v12 >> 3) + 5]
                              + 3
                              + (v6[2 * (*v12 >> 3) + 11] & (0x16F9u >> HIBYTE(v6[2 * (*v12 >> 3) + 11])))] != 5881 )
      {
LABEL_44:
        v16 = (_DWORD *)sub_2770780();
        goto LABEL_45;
      }
      v14 = *v12 >> 3;
      v15 = v6[2 * v14 + 11] & (0x16F9u >> HIBYTE(v6[2 * v14 + 11]));
      v16 = (_DWORD *)((__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v5
                                                                          + *(_QWORD *)((char *)&v6[2 * v14 + 20]
                                                                                      + HIWORD(v6[2
                                                                                                * (unsigned int)v6[2 * v14 + 5]
                                                                                                + 3
                                                                                                + v15]))))(
                        a1: v13,
                        a2: v15,
                        a3: v12);
      if ( v16 == v6 )
      {
        v23 = v6;
      }
      else
      {
        if ( (unsigned __int16)v6[2 * v6[2 * (*v16 >> 3) + 5]
                                + 3
                                + (v6[2 * (*v16 >> 3) + 11] & (0x16F9u >> HIBYTE(v6[2 * (*v16 >> 3) + 11])))] != 5881 )
        {
LABEL_45:
          v42 = v16;
          sub_2770780();
          goto LABEL_46;
        }
        v17 = *v16 >> 3;
        v18 = v6[2 * v17 + 11] & (0x16F9u >> HIBYTE(v6[2 * v17 + 11]));
        v19 = *(_QWORD *)((char *)&v6[2 * v17 + 60] + HIWORD(v6[2 * (unsigned int)v6[2 * v17 + 5] + 3 + v18]));
        v42 = v16;
        v20 = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v5 + v19))(a1, a2: v18, a3: v16);
        if ( (_DWORD *)v20 == v6 )
        {
LABEL_46:
          sub_2771080(a1: v21, a2: v22, a3: v44, a4: v43, a5: v45);
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
          return ((__int64 (*)(void))sub_4F308A0)();
        }
        v41 = (__int64)(v6 + 91338286);
        v40 = v20;
        if ( (unsigned int)sub_4FF2200(a1: v21, a2: v22, a3: v20, a4: v6 + 91338286, a5: v6 + 91338286) != 0 )
        {
          v23 = (_DWORD *)v40;
        }
        else
        {
          v27 = *(_QWORD *)(v7 + 40);
          if ( (unsigned __int64)(v27 + 24) > *(_QWORD *)(v7 + 32) )
          {
            v27 = sub_1EAA920(a1, a2, a3: 34085680);
          }
          else
          {
            *(_QWORD *)(v7 + 40) = v27 + 24;
            *(_DWORD *)v27 = 34085680;
            *(_DWORD *)(v27 + 4) = 0;
            *(_QWORD *)(v27 + 8) = 0;
            *(_QWORD *)(v27 + 16) = 0;
          }
          v39 = v27;
          v28 = *(_QWORD *)(v7 + 40);
          v29 = v28 + 32;
          if ( (unsigned __int64)(v28 + 32) > *(_QWORD *)(v7 + 32) )
          {
            v28 = sub_1EAA840(a1, a2, a3: 34082368, a4: v29, a5: 16);
            v27 = v39;
          }
          else
          {
            *(_QWORD *)(v7 + 40) = v29;
            *(_QWORD *)v28 = 34082368;
            *(_DWORD *)(v28 + 8) = 16;
            *(_DWORD *)(v28 + 12) = 0;
            *(_QWORD *)(v28 + 16) = 0;
            *(_QWORD *)(v28 + 24) = 0;
          }
          *(_DWORD *)(v27 + 4) = (unsigned __int64)(v28 - (_QWORD)v6) >> 3;
          if ( (*(_DWORD *)v27 & 2) != 0 )
          {
            v29 = v27 & 0xFFFFFFFFFFF80000LL;
            v37 = (v27 & 0xFFFFFFFFFFF80000LL) + 2112;
            if ( *(_BYTE *)((v27 & 0xFFFFFFFFFFF80000LL) + ((v27 - v37) >> 9) + 0x38) != 0 )
              *(_BYTE *)((v27 & 0xFFFFFFFFFFF80000LL) + ((v27 - v37) >> 9) + 0x38) = 0;
          }
          sub_4F36F80(a1, a2, a3: v27, a4: v29, a5: v40);
          v33 = sub_4F36F80(a1: v31, a2: v32, a3: v39, a4: v30, a5: v41);
          v34 = v39;
          if ( *(_DWORD *)(v39 + 8) != 0 )
          {
            v35 = *(_QWORD *)(v7 + 40);
            if ( (unsigned __int64)(v35 + 24) > *(_QWORD *)(v7 + 32) )
            {
              v41 = v33;
              v35 = sub_1EAA920(a1, a2, a3: 34082680);
              v36 = v39;
            }
            else
            {
              *(_QWORD *)(v7 + 40) = v35 + 24;
              *(_DWORD *)v35 = 34082680;
              *(_DWORD *)(v35 + 4) = 0;
              *(_QWORD *)(v35 + 8) = 0;
              *(_QWORD *)(v35 + 16) = 0;
              v36 = v34;
            }
            v41 = v35;
            sub_4FE9280(a1, a2, a3: v35, a4, a5: v36, a6: v6);
            v23 = (_DWORD *)v41;
          }
          else
          {
            v23 = v6 + 93320312;
          }
        }
      }
    }
    else
    {
      v23 = v6;
    }
  }
  if ( v23 != v6 )
  {
    v24 = (unsigned int)v23[1];
    if ( (_DWORD)v24 != 0 )
    {
      if ( v6[2 * v24 + 2] != 0 )
        v25 = v23;
      else
        v25 = v6 + 93146922;
      goto LABEL_17;
    }
    goto LABEL_42;
  }
  v25 = v23;
LABEL_17:
  v40 = (__int64)v23;
  result = sub_4F308A0(a1, a2, a3: v44, a4, a5: v25);
  if ( *(int *)(v7 + 16) <= 0 )
    return sub_277F280();
  return result;
}
