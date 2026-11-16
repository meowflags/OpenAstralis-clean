// sub_1ED8460
// rva 0x01ed8460  size 967  section .text  group text
// window base 0x181ed8460: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1ED8460(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r13
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rdx
  __int64 v11; // rcx
  unsigned int v12; // eax
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  unsigned int v20; // ebx
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rdi
  __int64 v26; // rsi
  int v27; // eax
  unsigned int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rdi
  __int64 v32; // rsi
  __int64 v33; // r8
  __int64 v34; // r9
  char v35; // [rsp+0h] [rbp-38h] BYREF
  __int64 v36; // [rsp+8h] [rbp-30h]
  __int64 v37; // [rsp+10h] [rbp-28h]
  unsigned int v38; // [rsp+18h] [rbp-20h]
  unsigned int v39; // [rsp+1Ch] [rbp-1Ch]
  unsigned __int64 v40; // [rsp+20h] [rbp-18h]
  unsigned int v41; // [rsp+28h] [rbp-10h]
  unsigned int v42; // [rsp+2Ch] [rbp-Ch]
  __int64 v43; // [rsp+30h] [rbp-8h]

  v37 = a3;
  v36 = a5;
  v42 = a6;
  if ( (unsigned __int64)&v35 <= *(_QWORD *)(v8 + 8) )
  {
    sub_1EB83C0(a1, a2, a3, a4, a5, a6, a7: v35);
  }
  else
  {
    if ( a5 != v7 )
    {
      a1 = *(_DWORD *)a5 >> 3;
      if ( (_DWORD)a1 == 4261200 )
      {
        if ( *(_DWORD *)(a5 + 8) != 0 )
        {
          v11 = *(_QWORD *)(a5 + 16);
          if ( v11 != 0 )
          {
            v41 = *(_DWORD *)(a5 + 8);
            v40 = v11;
            if ( v11 < 0 )
            {
              sub_1ED8DE0(a1: a5, a2: v7, a3, a4: 0, a5: v42, a6: 0);
              if ( v40 >> 61 == 6 )
                JUMPOUT(0x303D627BALL);
              JUMPOUT(0x303D627AELL);
            }
            v12 = sub_1ED8840(a1: (unsigned int)a6, a2: 1024, a3, a4: v11, a5: v11, a6: 0);
            v13 = 1;
            if ( v12 == 1024 )
            {
              v9 = 1024;
            }
            else
            {
              while ( 1 )
              {
                v14 = v12;
                v15 = v36;
                if ( (int)v41 <= (int)v13 )
                {
                  v9 = v12;
                  goto LABEL_7;
                }
                if ( v41 <= (unsigned int)v13 )
                  goto LABEL_47;
                v16 = *(_QWORD *)(v36 + 8 * v13 + 16);
                if ( v16 == 0 )
                {
                  v9 = v12;
                  goto LABEL_7;
                }
                v40 = *(_QWORD *)(v36 + 8 * v13 + 16);
                if ( v16 < 0 )
                {
                  v39 = v12;
                  v38 = v13;
                  sub_1ED8DE0(a1: v36, a2: v7, a3: v37, a4: (unsigned int)v13, a5: v42, a6: v12);
                  if ( v40 >> 61 == 6 )
                    JUMPOUT(0x303D62617LL);
                  JUMPOUT(0x303D6260CLL);
                }
                v38 = v13;
                v39 = v12;
                v12 = sub_1ED8840(a1: v42, a2: 1024, a3: v37, a4: v12, a5: v16, a6: v12);
                v13 = v38 + 1;
                if ( v12 == 1024 )
                  break;
                if ( *(int *)(v8 + 16) <= 0 )
                  v12 = sub_277F280(a1, a2, a3: v17, a4: v18, a5: v19, a6: v13);
              }
              v9 = 1024;
            }
          }
          else
          {
            v9 = 0;
          }
        }
        else
        {
          v9 = 0;
        }
        goto LABEL_7;
      }
      if ( (_DWORD)a1 == 5059124 )
      {
        v20 = 0;
        v41 = 0;
        while ( 1 )
        {
          v38 = v20;
          if ( (unsigned int)sub_1ED8F00(a1, a2, a3: a5, a4, a5: v20) == 0 )
          {
            v9 = v41;
            goto LABEL_7;
          }
          v21 = *(unsigned int *)(v36 + 4);
          if ( (_DWORD)v21 == 0 )
            goto LABEL_45;
          if ( v38 >= *(_DWORD *)(v7 + 8 * v21 + 8) )
            goto LABEL_46;
          v22 = v7 + 8 * v21;
          v23 = *(_QWORD *)(v22 + 8LL * v38 + 16);
          if ( v23 < 0 )
          {
            sub_1ED8DE0(a1: v22, a2: v7 + 8LL * *(unsigned int *)(v36 + 8), a3: v37, a4: v38, a5: v42, a6: v41);
            v39 = v41 + 1;
          }
          else
          {
            v40 = *(_QWORD *)(v22 + 8LL * v38 + 16);
            v39 = sub_1ED8840(a1: v42, a2: 1024, a3: v37, a4: v23, a5: v40, a6: v41);
          }
          v27 = sub_1ED9280(a1: v25, a2: v26, a3: v36, a4: v24, a5: v38);
          v28 = v38 + v27;
          if ( v39 == 1024 )
            break;
          v20 = v28;
          v43 = v6;
          v41 = v39;
          a5 = v36;
        }
        v9 = 1024;
        goto LABEL_7;
      }
    }
    if ( a5 == v7 )
    {
      v9 = 0;
LABEL_7:
      if ( *(int *)(v8 + 16) <= 0 )
        sub_277F280(a1, a2, a3: v9);
      return (unsigned int)v9 - v42;
    }
  }
  sub_28C1C40(a1, a2, a3: v7 + 366381408);
LABEL_45:
  sub_276EFE0();
LABEL_46:
  sub_276F0E0();
LABEL_47:
  sub_276F0E0(a1, a2, a3: v37, a4: v14, a5: v15);
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
  return sub_1ED8840(a1: v31, a2: v32, a3: v29, a4: v30, a5: v33, a6: v34);
}
