// sub_2765940
// rva 0x02765940  size 765  section .text  group text
// window base 0x182765940: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_2765940(unsigned __int64 a1, unsigned __int64 a2, int a3, int a4, _DWORD *a5, int a6)
{
  __int64 v6; // r13
  _DWORD *v7; // r14
  __int64 v8; // r15
  __int64 v9; // rbx
  int v10; // ecx
  unsigned __int64 v11; // rbp
  unsigned __int64 i; // rax
  __int64 v13; // rax
  unsigned int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rsi
  int v18; // edx
  int v19; // eax
  __int64 (__fastcall *v20)(unsigned __int64, unsigned __int64, _DWORD *); // rbx
  _DWORD *v21; // r8
  int v22; // edx
  int v23; // ecx
  unsigned int v24; // eax
  __int64 v25; // rdi
  __int64 v26; // rsi
  int v27; // r9d
  __int64 v28; // xmm0_8
  int v29; // ebp
  int v30; // ebx
  unsigned int v31; // ebx
  int v32; // eax
  __int64 result; // rax
  double v34; // xmm0_8
  char v35; // [rsp+0h] [rbp-58h] BYREF
  int v36; // [rsp+Ch] [rbp-4Ch]
  __int64 v37; // [rsp+10h] [rbp-48h]
  _DWORD *v38; // [rsp+18h] [rbp-40h]
  int v39; // [rsp+24h] [rbp-34h]
  int v40; // [rsp+28h] [rbp-30h]
  unsigned int v41; // [rsp+2Ch] [rbp-2Ch]
  int v42; // [rsp+30h] [rbp-28h]
  int v43; // [rsp+34h] [rbp-24h]
  double (__fastcall *v44)(__int64, __int64, _DWORD *); // [rsp+38h] [rbp-20h]
  __int64 (__fastcall *v45)(unsigned __int64, unsigned __int64, _DWORD *); // [rsp+40h] [rbp-18h]
  unsigned int v46; // [rsp+48h] [rbp-10h]
  unsigned int v47; // [rsp+4Ch] [rbp-Ch]
  __int64 v48; // [rsp+50h] [rbp-8h]

  v47 = a3;
  v38 = a5;
  if ( (unsigned __int64)&v35 <= *(_QWORD *)(v8 + 8) )
  {
    sub_1EB84E0();
  }
  else if ( a3 >= 0 )
  {
    v9 = *(_QWORD *)(v8 + 40);
    v10 = 34253408;
    v11 = (8LL * (unsigned int)a3 + 23) & 0xFFFFFFFF8LL;
    if ( v11 >= 0x20000 || (a2 = v9 + v11, v9 + v11 > *(_QWORD *)(v8 + 32)) )
    {
      v37 = sub_1EAA840(a1, a2, a3: 34253408, a4: 34253408, a5: v47);
      a5 = v38;
      a3 = v47;
    }
    else
    {
      *(_QWORD *)(v8 + 40) = a2;
      *(_QWORD *)v9 = 34253408;
      *(_DWORD *)(v9 + 8) = a3;
      *(_DWORD *)(v9 + 12) = 0;
      if ( v11 - 16 >= 0x800 )
      {
        memset((void *)(v9 + 16), 0, v11 - 16);
        a1 = v9 + v11;
        v10 = 0;
      }
      else
      {
        for ( i = 16; v11 > i; i += 8LL )
          *(_QWORD *)(v9 + i) = 0;
      }
      v37 = v9;
    }
    if ( a3 < 1 )
    {
      v46 = 0;
      v31 = 0;
      v32 = 0;
LABEL_21:
      if ( v32 != 0 )
      {
        v42 = v32;
        v43 = v31;
        result = sub_C965A80(a1, a2, a3: v31, a4: v37);
      }
      else
      {
        v43 = v31;
        v42 = 0;
        result = v37;
      }
      if ( *(int *)(v8 + 16) <= 0 )
        return sub_277F280(a1, a2, a3: v46);
      return result;
    }
    if ( a5 != v7 )
    {
      v13 = *a5 >> 3;
      v45 = (__int64 (__fastcall *)(unsigned __int64, unsigned __int64, _DWORD *))(v6 + *(_QWORD *)&v7[2 * v13 + 102]);
      v36 = v13;
      v14 = v45(a1, a2, a3: a5);
      v44 = (double (__fastcall *)(__int64, __int64, _DWORD *))(v6 + *(_QWORD *)&v7[2 * v36 + 118]);
      if ( v14 == 68 )
      {
        v43 = 68;
        v34 = v44(a1: v16, a2: v17, a3: v38);
        *(double *)(v37 + 16) = v34;
        v18 = 0;
      }
      else
      {
        v43 = v14;
        sub_2767200(a1: v16, a2: v17, a3: v14, a4: v15, a5: v38);
        v18 = 1;
      }
      v19 = v43;
      v43 = v18;
      v42 = v19;
      v20 = v45;
      v21 = v38;
      v22 = v47;
      v23 = 1;
      while ( v22 > v23 )
      {
        v41 = v23;
        v24 = v20(a1, a2, a3: v21);
        if ( v24 == 68 )
        {
          v40 = v41 + 1;
          v39 = 68;
          v44(a1: v25, a2: v26, a3: v38);
          v22 = v47;
          if ( v47 <= v41 )
            goto LABEL_34;
          v29 = v40;
          v30 = v39;
          *(_QWORD *)(v37 + 8LL * v41 + 16) = v28;
          v42 = v30;
          v20 = v45;
          v21 = v38;
          v23 = v29;
        }
        else
        {
          v40 = v41 + 1;
          v39 = v24;
          sub_2767200(a1: v25, a2: v26, a3: v24, a4: v41 + 1, a5: v38);
          v43 = 1;
          v48 = v6;
          v42 = v39;
          v23 = v40;
          v20 = v45;
          v21 = v38;
          v22 = v47;
        }
      }
      v46 = v23;
      v31 = v42;
      v32 = v43;
      goto LABEL_21;
    }
LABEL_33:
    sub_2771080(a1, a2, a3, a4: v10, (_DWORD)a5, a6, a7: v35);
LABEL_34:
    sub_2771220(a1, a2: (_DWORD)v38, a3: v41, a4: v22, a5: v22, a6: v27, a7: v35);
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_2765C40();
  }
  sub_2770E80(a1, a2, a3, a4, (_DWORD)a5, a6, a7: v35);
  goto LABEL_33;
}
