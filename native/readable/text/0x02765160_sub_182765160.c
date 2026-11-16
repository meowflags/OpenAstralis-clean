// sub_2765160
// rva 0x02765160  size 732  section .text  group text
// window base 0x182765160: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_2765160(unsigned __int64 a1, unsigned __int64 a2, int a3, int a4, _DWORD *a5, int a6)
{
  __int64 v6; // r13
  _DWORD *v7; // r14
  __int64 v8; // r15
  __int64 v9; // rbx
  __int64 v10; // rcx
  unsigned __int64 v11; // rbp
  unsigned __int64 i; // rax
  unsigned int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rsi
  int v17; // edx
  int v18; // eax
  __int64 (__fastcall *v19)(unsigned __int64, unsigned __int64, _DWORD *, __int64, _DWORD *, _QWORD); // rax
  _DWORD *v20; // r8
  int v21; // edx
  __int64 v22; // rcx
  unsigned int v23; // eax
  __int64 v24; // rdi
  __int64 v25; // rsi
  char v26; // al
  int v27; // r9d
  int v28; // ebp
  unsigned int v29; // ebx
  int v30; // eax
  __int64 result; // rax
  char v32; // al
  char v33; // [rsp+0h] [rbp-48h] BYREF
  __int64 v34; // [rsp+8h] [rbp-40h]
  _DWORD *v35; // [rsp+10h] [rbp-38h]
  int v36; // [rsp+1Ch] [rbp-2Ch]
  unsigned int v37; // [rsp+20h] [rbp-28h]
  unsigned int v38; // [rsp+24h] [rbp-24h]
  int v39; // [rsp+28h] [rbp-20h]
  int v40; // [rsp+2Ch] [rbp-1Ch]
  __int64 (__fastcall *v41)(unsigned __int64, unsigned __int64, _DWORD *, __int64); // [rsp+30h] [rbp-18h]
  unsigned int v42; // [rsp+38h] [rbp-10h]
  unsigned int v43; // [rsp+3Ch] [rbp-Ch]
  __int64 v44; // [rsp+40h] [rbp-8h]

  v43 = a3;
  v35 = a5;
  if ( (unsigned __int64)&v33 <= *(_QWORD *)(v8 + 8) )
  {
    sub_1EB84E0();
  }
  else if ( a3 >= 0 )
  {
    v9 = *(_QWORD *)(v8 + 40);
    v10 = 34082368;
    v11 = ((unsigned int)a3 + 19LL) & 0x1FFFFFFF8LL;
    if ( v11 >= 0x20000 || (a2 = v9 + v11, v9 + v11 > *(_QWORD *)(v8 + 32)) )
    {
      v34 = sub_1EAA840(a1, a2, a3: 34082368, a4: 34082368, a5: v43);
      a5 = v35;
      a3 = v43;
    }
    else
    {
      *(_QWORD *)(v8 + 40) = a2;
      *(_QWORD *)v9 = 34082368;
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
      v34 = v9;
    }
    if ( a3 < 1 )
    {
      v42 = 0;
      v29 = 0;
      v30 = 0;
LABEL_21:
      if ( v30 != 0 )
      {
        v39 = v30;
        v40 = v29;
        result = sub_C965A80(a1, a2, a3: v29, a4: v34);
      }
      else
      {
        v40 = v29;
        v39 = 0;
        result = v34;
      }
      if ( *(int *)(v8 + 16) <= 0 )
        return sub_277F280(a1, a2, a3: v42);
      return result;
    }
    if ( a5 != v7 )
    {
      v41 = (__int64 (__fastcall *)(unsigned __int64, unsigned __int64, _DWORD *, __int64))(v6
                                                                                          + *(_QWORD *)&v7[2 * (*a5 >> 3) + 102]);
      v13 = v41(a1, a2, a3: a5, a4: v10);
      if ( v13 == 66 )
      {
        v40 = 66;
        v32 = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *))v41)(a1: v15, a2: v16, a3: v35);
        *(_BYTE *)(v34 + 12) = v32;
        v17 = 0;
      }
      else
      {
        v40 = v13;
        sub_2767200(a1: v15, a2: v16, a3: v13, a4: v14, a5: v35);
        v17 = 1;
      }
      v18 = v40;
      v40 = v17;
      v39 = v18;
      v19 = (__int64 (__fastcall *)(unsigned __int64, unsigned __int64, _DWORD *, __int64, _DWORD *, _QWORD))v41;
      v20 = v35;
      v21 = v43;
      v22 = 1;
      while ( v21 > (int)v22 )
      {
        v38 = v22;
        v23 = v19(a1, a2, a3: v20, a4: v22, a5: v20, a6: v19);
        if ( v23 == 66 )
        {
          v37 = v38 + 1;
          v36 = 66;
          v26 = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *))v41)(a1: v24, a2: v25, a3: v35);
          v21 = v43;
          if ( v43 <= v38 )
            goto LABEL_34;
          a2 = v37;
          v28 = v36;
          *(_BYTE *)(v34 + v38 + 12) = v26;
          v39 = v28;
          v19 = (__int64 (__fastcall *)(unsigned __int64, unsigned __int64, _DWORD *, __int64, _DWORD *, _QWORD))v41;
          v20 = v35;
          v22 = (unsigned int)a2;
        }
        else
        {
          v37 = v38 + 1;
          v36 = v23;
          sub_2767200(a1: v24, a2: v25, a3: v23, a4: v38 + 1, a5: v35);
          v40 = 1;
          v44 = v6;
          v39 = v36;
          v22 = v37;
          v19 = (__int64 (__fastcall *)(unsigned __int64, unsigned __int64, _DWORD *, __int64, _DWORD *, _QWORD))v41;
          v20 = v35;
          v21 = v43;
        }
      }
      v42 = v22;
      v29 = v39;
      v30 = v40;
      goto LABEL_21;
    }
LABEL_33:
    sub_2771080(a1, a2, a3, a4: v10, (_DWORD)a5, a6, a7: v33);
LABEL_34:
    sub_2771220(a1, a2: (_DWORD)v35, a3: v38, a4: v34, a5: v21, a6: v27, a7: v33);
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_2765440();
  }
  sub_2770E80(a1, a2, a3, a4, (_DWORD)a5, a6, a7: v33);
  goto LABEL_33;
}
