// sub_182764DE0
// rva 0x02764de0  size 883  section .text  group text
// window base 0x182764de0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_182764DE0(unsigned __int64 a1, unsigned __int64 a2, int a3, int a4, _DWORD *a5, int a6)
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
  unsigned int v18; // eax
  __int64 (__fastcall *v19)(unsigned __int64, unsigned __int64, _DWORD *, __int64, _DWORD *, _QWORD); // rax
  _DWORD *v20; // r8
  int v21; // edx
  __int64 v22; // rcx
  unsigned int v23; // eax
  __int64 v24; // rdi
  __int64 v25; // rsi
  int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // rdi
  __int64 v29; // rsi
  int v30; // r9d
  int v31; // eax
  int v32; // ebp
  unsigned int v33; // eax
  unsigned int v34; // ebp
  __int64 result; // rax
  int v36; // eax
  __int64 v37; // rcx
  char v38; // [rsp+0h] [rbp-48h] BYREF
  __int64 v39; // [rsp+8h] [rbp-40h]
  _DWORD *v40; // [rsp+10h] [rbp-38h]
  int v41; // [rsp+18h] [rbp-30h]
  int v42; // [rsp+1Ch] [rbp-2Ch]
  unsigned int v43; // [rsp+20h] [rbp-28h]
  unsigned int v44; // [rsp+24h] [rbp-24h]
  int v45; // [rsp+28h] [rbp-20h]
  unsigned int v46; // [rsp+2Ch] [rbp-1Ch]
  __int64 (__fastcall *v47)(unsigned __int64, unsigned __int64, _DWORD *, __int64); // [rsp+30h] [rbp-18h]
  int v48; // [rsp+38h] [rbp-10h]
  unsigned int v49; // [rsp+3Ch] [rbp-Ch]
  __int64 v50; // [rsp+40h] [rbp-8h]

  v49 = a3;
  v40 = a5;
  if ( (unsigned __int64)&v38 <= *(_QWORD *)(v8 + 8) )
  {
    MEMORY[0x181EB84E0]();
  }
  else if ( a3 >= 0 )
  {
    v9 = *(_QWORD *)(v8 + 40);
    v10 = 34572824;
    v11 = ((unsigned int)a3 + 19LL) & 0x1FFFFFFF8LL;
    if ( v11 >= 0x20000 || (a2 = v9 + v11, v9 + v11 > *(_QWORD *)(v8 + 32)) )
    {
      v39 = MEMORY[0x181EAA840](a1, a2, a3: 34572824, a4: 34572824, a5: v49);
      a5 = v40;
      a3 = v49;
    }
    else
    {
      *(_QWORD *)(v8 + 40) = a2;
      *(_QWORD *)v9 = 34572824;
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
      v39 = v9;
    }
    if ( a3 < 1 )
    {
      v48 = 0;
      v33 = 0;
      v34 = 0;
LABEL_26:
      if ( v34 != 0 )
      {
        v45 = v34;
        v46 = v33;
        result = MEMORY[0x18C965A80](a1, a2, a3: v33, a4: v39);
      }
      else
      {
        v46 = v33;
        v45 = 0;
        result = v39;
      }
      if ( *(int *)(v8 + 16) <= 0 )
        return sub_18277F280(a1, a2, a3: v46);
      return result;
    }
    if ( a5 != v7 )
    {
      v47 = (__int64 (__fastcall *)(unsigned __int64, unsigned __int64, _DWORD *, __int64))(v6
                                                                                          + *(_QWORD *)&v7[2 * (*a5 >> 3) + 102]);
      v13 = v47(a1, a2, a3: a5, a4: v10);
      if ( v13 == 90 )
      {
        v46 = 90;
        v36 = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *))v47)(a1: v15, a2: v16, a3: v40);
        if ( v36 != 0 )
        {
          if ( v36 == 1 )
          {
            v17 = 0;
          }
          else
          {
            v45 = v36;
            sub_182767200(a1, a2, a3: 90, a4: v37, a5: v40);
            v17 = 1;
            v36 = v45;
          }
        }
        else
        {
          v17 = 0;
        }
        *(_BYTE *)(v39 + 12) = v36 == 1;
        v18 = v46;
      }
      else
      {
        v46 = v13;
        sub_182767200(a1: v15, a2: v16, a3: v13, a4: v14, a5: v40);
        v17 = 1;
        v18 = v46;
      }
      v46 = v17;
      v45 = v18;
      v19 = (__int64 (__fastcall *)(unsigned __int64, unsigned __int64, _DWORD *, __int64, _DWORD *, _QWORD))v47;
      v20 = v40;
      v21 = v49;
      v22 = 1;
      while ( v21 > (int)v22 )
      {
        v44 = v22;
        v23 = v19(a1, a2, a3: v20, a4: v22, a5: v20, a6: v19);
        if ( v23 == 90 )
        {
          v43 = v44 + 1;
          v42 = 90;
          v26 = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *))v47)(a1: v24, a2: v25, a3: v40);
          if ( v26 != 0 )
          {
            if ( v26 == 1 )
            {
              v41 = 1;
              v21 = v49;
              v31 = v46;
            }
            else
            {
              v41 = v26;
              sub_182767200(a1: v28, a2: v29, a3: 90, a4: v27, a5: v40);
              v31 = 1;
              v21 = v49;
            }
          }
          else
          {
            v41 = 0;
            v21 = v49;
            v31 = v46;
          }
          if ( v21 <= v44 )
            goto LABEL_44;
          a2 = v43;
          v32 = v42;
          a1 = v41 == 1;
          *(_BYTE *)(v39 + v44 + 12) = a1;
          v46 = v31;
          v45 = v32;
          v19 = (__int64 (__fastcall *)(unsigned __int64, unsigned __int64, _DWORD *, __int64, _DWORD *, _QWORD))v47;
          v20 = v40;
          v22 = (unsigned int)a2;
        }
        else
        {
          v43 = v44 + 1;
          v42 = v23;
          sub_182767200(a1: v24, a2: v25, a3: v23, a4: v44 + 1, a5: v40);
          v46 = 1;
          v50 = v6;
          v45 = v42;
          v22 = v43;
          v19 = (__int64 (__fastcall *)(unsigned __int64, unsigned __int64, _DWORD *, __int64, _DWORD *, _QWORD))v47;
          v20 = v40;
          v21 = v49;
        }
      }
      v48 = v22;
      v33 = v45;
      v34 = v46;
      goto LABEL_26;
    }
LABEL_43:
    sub_182771080(a1, a2, a3, a4: v10, (_DWORD)a5, a6, a7: v38);
LABEL_44:
    sub_182771220(a1: (_DWORD)v40, a2: v41, a3: v44, a4: v21, a5: v21, a6: v30, a7: v38);
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
    return sub_182765160();
  }
  sub_182770E80(a1, a2, a3, a4, (_DWORD)a5, a6, a7: v38);
  goto LABEL_43;
}
