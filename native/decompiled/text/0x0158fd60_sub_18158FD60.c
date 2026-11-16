// sub_18158FD60
// rva 0x0158fd60  size 637  section .text  group text
// window base 0x18158fd60: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18158FD60(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, _DWORD *a5, unsigned int a6)
{
  _DWORD *v6; // rbp
  __int64 v7; // r13
  _DWORD *v8; // r14
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rbx
  _DWORD *v13; // rcx
  void (__fastcall *v14)(__int64, _QWORD, _DWORD *); // rsi
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // rsi
  _DWORD *v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rsi
  _DWORD *v24; // rax
  __int64 v25; // rdi
  __int64 v26; // rsi
  __int64 v27; // rcx
  _DWORD *v28; // rax
  __int64 v29; // rdi
  __int64 v30; // rsi
  __int64 v31; // rcx
  __int64 v32; // rdi
  __int64 v33; // rsi
  _DWORD *v34; // rax
  __int64 v35; // rdi
  __int64 v36; // rsi
  _DWORD *v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rdi
  __int64 v40; // rsi
  __int64 v41; // rdi
  __int64 v42; // rsi
  __int64 result; // rax
  __int64 v44; // [rsp+0h] [rbp-48h] BYREF
  int v45; // [rsp+10h] [rbp-38h]
  int v46; // [rsp+14h] [rbp-34h]
  _DWORD *v47; // [rsp+18h] [rbp-30h]
  _DWORD *v48; // [rsp+20h] [rbp-28h]
  _DWORD *v49; // [rsp+28h] [rbp-20h]
  _DWORD *v50; // [rsp+30h] [rbp-18h]
  __int64 (__fastcall *v51)(__int64, __int64, _DWORD *, __int64, _DWORD *); // [rsp+38h] [rbp-10h]
  unsigned int v52; // [rsp+44h] [rbp-4h]

  v50 = a3;
  if ( (unsigned __int64)&v44 <= *(_QWORD *)(v9 + 8) )
  {
    v52 = a6;
    v49 = a5;
    MEMORY[0x181EB84E0]();
  }
  else if ( a3 != v8 )
  {
    v10 = (unsigned int)a3[2];
    if ( (_DWORD)v10 != 0 )
    {
      v11 = v8[2 * v10] >> 3;
      if ( (_DWORD)v11 != 4474678 )
        goto LABEL_24;
    }
    if ( (_DWORD)v10 == 0 )
      goto LABEL_20;
    v12 = (unsigned int)v8[2 * v10 + 2];
    v6 = &v8[2 * v12];
    v13 = &v8[2 * v8[2 * v10 + 1]];
    if ( a5 == v8 )
    {
LABEL_21:
      v48 = v13;
      v47 = v6;
      v52 = a6;
      MEMORY[0x182771080]();
LABEL_22:
      MEMORY[0x182771080]();
      goto LABEL_23;
    }
    v48 = &v8[2 * v8[2 * v10 + 1]];
    v47 = &v8[2 * v12];
    v46 = v12;
    v52 = a6;
    v45 = *a5 >> 3;
    v14 = (void (__fastcall *)(__int64, _QWORD, _DWORD *))(v7 + *(_QWORD *)&v8[2 * v45 + 44]);
    v49 = a5;
    v14(a1, a2: v14, a3: a5);
    MEMORY[0x181585FC0](a1: v16, a2: v17, a3: &v8[2 * v50[1]], a4: v15, a5: v49, a6: v52);
    if ( v46 != 0 )
    {
      v51 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *, __int64, _DWORD *))(v7 + *(_QWORD *)&v8[2 * v45 + 64]);
      v21 = (_DWORD *)v51(a1: v19, a2: v20, a3: v49, a4: (__int64)v51, a5: v8 + 89660288);
      if ( v21 == v8 )
      {
LABEL_25:
        MEMORY[0x182771080]();
        goto LABEL_26;
      }
      v24 = (_DWORD *)((__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v7 + *(_QWORD *)&v8[2 * (*v21 >> 3) + 36]))(
                        a1: v22,
                        a2: v23,
                        a3: v21);
      if ( v24 == v8 )
      {
LABEL_26:
        MEMORY[0x182771080]();
        goto LABEL_27;
      }
      v27 = *(_QWORD *)&v8[2 * (*v24 >> 3) + 64];
      v28 = (_DWORD *)((__int64 (__fastcall *)(__int64, __int64, _DWORD *, __int64, _DWORD *))(v7 + v27))(
                        a1: v25,
                        a2: v26,
                        a3: v24,
                        a4: v27,
                        a5: v47);
      if ( v28 == v8 )
      {
LABEL_27:
        MEMORY[0x182771080](a1: v29, a2: v30, a3: v50, a4: v48, a5: v49, a6: v52);
        __builtin_debugtrap();
        __builtin_debugtrap();
        __builtin_debugtrap();
        return sub_18158FFE0();
      }
      ((void (__fastcall *)(__int64, __int64, _DWORD *))(v7 + *(_QWORD *)&v8[2 * (*v28 >> 3) + 46]))(
        a1: v29,
        a2: v30,
        a3: v28);
      v34 = (_DWORD *)v51(a1: v32, a2: v33, a3: v49, a4: v31, a5: v8 + 90333132);
    }
    else
    {
      v34 = (_DWORD *)((__int64 (__fastcall *)(__int64, __int64, _DWORD *, __int64, _DWORD *))(v7
                                                                                             + *(_QWORD *)&v8[2 * v45 + 64]))(
                        a1: v19,
                        a2: v20,
                        a3: v49,
                        a4: v18,
                        a5: v8 + 90333132);
    }
    if ( v34 == v8 )
      goto LABEL_22;
    v37 = (_DWORD *)((__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v7 + *(_QWORD *)&v8[2 * (*v34 >> 3) + 36]))(
                      a1: v35,
                      a2: v36,
                      a3: v34);
    if ( v37 == v8 )
    {
LABEL_23:
      v10 = MEMORY[0x182771080]();
LABEL_24:
      v52 = a6;
      v49 = a5;
      MEMORY[0x18276FC00](a1, a2, a3: &v8[2 * v10], a4: v11, a5: v8 + 8949356);
      goto LABEL_25;
    }
    ((void (__fastcall *)(__int64, __int64, _DWORD *, __int64, _DWORD *))(v7 + *(_QWORD *)&v8[2 * (*v37 >> 3) + 64]))(
      a1: v39,
      a2: v40,
      a3: v37,
      a4: v38,
      a5: v48);
    result = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v7 + *(_QWORD *)&v8[2 * v45 + 42]))(
               a1: v41,
               a2: v42,
               a3: v49);
    if ( *(int *)(v9 + 16) <= 0 )
      return MEMORY[0x18277F280]();
    return result;
  }
  v52 = a6;
  v49 = a5;
  MEMORY[0x182771080]();
LABEL_20:
  v52 = a6;
  v49 = a5;
  MEMORY[0x182771080]();
  goto LABEL_21;
}
