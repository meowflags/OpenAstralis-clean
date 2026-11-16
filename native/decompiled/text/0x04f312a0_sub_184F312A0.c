// sub_184F312A0
// rva 0x04f312a0  size 1265  section .text  group text
// window base 0x184f312a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F312A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // ebx
  unsigned int v7; // ebp
  __int64 v8; // r13
  __int64 v9; // r14
  __int64 v10; // r15
  __int64 v11; // rbp
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // r10
  unsigned __int64 i; // rcx
  __int64 v16; // rcx
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdi
  __int64 v21; // rsi
  unsigned int v22; // eax
  __int64 v23; // r8
  unsigned int v24; // eax
  __int64 v25; // rcx
  unsigned int v26; // ebp
  unsigned int v27; // r9d
  int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rcx
  int v33; // eax
  int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rdi
  __int64 v38; // rsi
  __int64 v39; // r8
  char v40; // [rsp+0h] [rbp-58h] BYREF
  __int64 v41; // [rsp+10h] [rbp-48h]
  __int64 v42; // [rsp+18h] [rbp-40h]
  __int64 v43; // [rsp+20h] [rbp-38h]
  __int64 v44; // [rsp+28h] [rbp-30h]
  int v45; // [rsp+34h] [rbp-24h]
  unsigned int v46; // [rsp+38h] [rbp-20h]
  unsigned int v47; // [rsp+3Ch] [rbp-1Ch]
  unsigned int v48; // [rsp+40h] [rbp-18h]
  unsigned int v49; // [rsp+44h] [rbp-14h]
  unsigned int v50; // [rsp+48h] [rbp-10h]
  unsigned int v51; // [rsp+4Ch] [rbp-Ch]
  __int64 v52; // [rsp+50h] [rbp-8h]

  v44 = a5;
  v51 = a6;
  if ( (unsigned __int64)&v40 <= *(_QWORD *)(v10 + 8) )
  {
    v43 = a3;
    MEMORY[0x181EB84E0]();
  }
  else
  {
    if ( (_DWORD)a6 == 0 )
    {
      if ( *(int *)(v10 + 16) <= 0 )
      {
        v50 = a1;
        v43 = a3;
        MEMORY[0x18277F280]();
        return v44;
      }
      return a5;
    }
    v49 = *(unsigned __int16 *)(a3 + 4);
    if ( (int)a1 >= 3 )
      JUMPOUT(0x309E472DELL);
    v6 = 0;
    if ( (int)a6 >= 0 )
    {
      v11 = *(_QWORD *)(v10 + 40);
      v12 = *(_QWORD *)(v10 + 32);
      v13 = ((unsigned int)a6 + 19LL) & 0x1FFFFFFF8LL;
      if ( v13 >= 0x20000 || v11 + v13 > v12 )
      {
        v48 = 0;
        v50 = a1;
        v43 = a3;
        v11 = MEMORY[0x181EAA840](a1, a2: 34082368, a3: 34082368, a4: v12, a5: v51);
        v6 = v48;
        a1 = v50;
        a6 = v51;
        a5 = v44;
        a3 = v43;
      }
      else
      {
        *(_QWORD *)(v10 + 40) = v11 + v13;
        *(_QWORD *)v11 = 34082368;
        *(_DWORD *)(v11 + 8) = a6;
        *(_DWORD *)(v11 + 12) = 0;
        if ( v13 - 16 >= 0x800 )
        {
          v48 = 0;
          v50 = a1;
          v43 = a3;
          memset((void *)(v11 + 16), 0, v13 - 16);
          a1 = v50;
        }
        else
        {
          for ( i = 16; v13 > i; i += 8LL )
            *(_QWORD *)(v11 + i) = 0;
        }
      }
      v16 = *(_QWORD *)(v10 + 40);
      v17 = v16 + 24;
      if ( (unsigned __int64)(v16 + 24) > *(_QWORD *)(v10 + 32) )
      {
        v42 = v11;
        v48 = v6;
        v50 = a1;
        v43 = a3;
        v16 = MEMORY[0x181EAA920](a1, a2: v17, a3: 34085680, a4: v16, a5, a6);
        v11 = v42;
        v6 = v48;
        a5 = v44;
        a3 = v43;
      }
      else
      {
        *(_QWORD *)(v10 + 40) = v17;
        *(_DWORD *)v16 = 34085680;
        *(_DWORD *)(v16 + 4) = 0;
        *(_QWORD *)(v16 + 8) = 0;
        *(_QWORD *)(v16 + 16) = 0;
      }
      v42 = v16;
      *(_DWORD *)(v16 + 4) = (unsigned __int64)(v11 - v9) >> 3;
      if ( v6 != 0 )
      {
        v43 = a3;
        v48 = v6;
        sub_184F36C80(a1: v6, a2: a5, a3: v16, a4: v16, a5, a6: 0);
        v22 = v48;
      }
      else
      {
        v48 = 0;
        v43 = a3;
        v22 = sub_184F317A0(a1: v42, a2: v17, a3, a4: v16, a5: v44);
      }
      while ( 1 )
      {
        while ( 1 )
        {
          v23 = v44;
          if ( (int)v51 <= (int)v22 )
          {
            v50 = v22;
            goto LABEL_33;
          }
          v7 = v22 + 1;
          if ( v44 == v9 )
            goto LABEL_60;
          v50 = v22 + 1;
          v24 = MEMORY[0x184FEBC20](a1: v20, a2: v21, a3: v44, a4: v19, a5: v22);
          if ( v24 == 92 || v24 == 47 )
            break;
          v47 = v24;
          sub_184F35F80(a1: v20, a2: v21, a3: v42, a4: v25, a5: v24);
          v22 = v50;
        }
        v47 = v24;
        v26 = v50;
        while ( 1 )
        {
          v27 = v51;
          if ( (int)v51 <= (int)v26 )
            break;
          v46 = v26;
          v28 = MEMORY[0x184FEBC20](a1: v20, a2: v21, a3: v44, a4: v25, a5: v26);
          v26 = v46 + 1;
          if ( v28 != 92 && v28 != 47 )
          {
            v26 = v46;
            break;
          }
        }
        if ( v26 == v51 )
          break;
        v46 = v26;
        sub_184F35F80(a1: v20, a2: v21, a3: v42, a4: v25, a5: v49);
        v22 = v46;
      }
      v46 = v26;
      v32 = v42;
      v33 = *(_DWORD *)(v42 + 8);
      if ( v33 == 2 )
      {
        v45 = 2;
        if ( (unsigned int)sub_184F380A0(a1: v20, a2: v21, a3: v42, a4: v42, a5: 1, a6: v27, a7: v40) == 58 )
          goto LABEL_48;
        v33 = v45;
      }
      if ( v33 != 0 )
      {
        if ( v33 != 1 )
        {
          v52 = v8;
          v50 = v46;
LABEL_33:
          v29 = v42;
          if ( *(_DWORD *)(v42 + 8) != 0 )
          {
            v30 = *(_QWORD *)(v10 + 40);
            if ( (unsigned __int64)(v30 + 24) > *(_QWORD *)(v10 + 32) )
            {
              v30 = MEMORY[0x181EAA920](a1: v20, a2: v21, a3: 34082680);
              v29 = v42;
            }
            else
            {
              *(_QWORD *)(v10 + 40) = v30 + 24;
              *(_DWORD *)v30 = 34082680;
              *(_DWORD *)(v30 + 4) = 0;
              *(_QWORD *)(v30 + 8) = 0;
              *(_QWORD *)(v30 + 16) = 0;
            }
            v41 = v30;
            MEMORY[0x184FE9280](a1: v20, a2: v21, a3: v30, a4: v29, a5: v29, a6: v9);
            v31 = v41;
          }
          else
          {
            v31 = v9 + 373281248;
          }
          if ( *(int *)(v10 + 16) <= 0 )
            MEMORY[0x18277F280](a1: v20, a2: v21, a3: v31);
          return v31;
        }
        v34 = sub_184F380A0(a1: v20, a2: v21, a3: v42, a4: v32, a5: 0, a6: v27, a7: v40);
        if ( v34 != 92 && v34 != 47 )
        {
          v52 = v8;
          v50 = v46;
          goto LABEL_33;
        }
      }
LABEL_48:
      sub_184F35F80(a1: v20, a2: v21, a3: v42, a4: v32, a5: v49);
      v52 = v8;
      v50 = v46;
      goto LABEL_33;
    }
  }
  v48 = v6;
  v43 = a3;
  MEMORY[0x182770E80](a1, a2, a3: v51);
LABEL_60:
  v50 = v7;
  MEMORY[0x182771080](a1: v20, a2: v21, a3: v18, a4: v19, a5: v23);
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
  return sub_184F317A0(a1: v37, a2: v38, a3: v35, a4: v36, a5: v39);
}
